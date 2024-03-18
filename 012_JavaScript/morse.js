import { MorseCode, MorseCodeDic, Sign } from "./morse-code.js";

const dic = new MorseCodeDic();

function stringifyMorse(morse) {
    let str = '';
    for (let m of morse) {
        str += `${m}_`;
    }
    return str.slice(0, -1);
}

function convertTextToMorse() {
    const val = document.getElementById('textConvIn').value;

    if (val) {
        const morse = dic.convertTextToMorse(val);
        document.getElementById('textConvOut').innerHTML = stringifyMorse(morse);
    }
}

function convertMorseToText() {
    const val = document.getElementById('morseConvIn').value;

    if (val) {
        let morse = [];

        for (let m of val.split('_')) {
            let temp = [];

            for (let c of m.split(' ').filter(c => c !== '')) {
                switch (c) {
                    case '•':
                        temp.push(Sign.Short);
                        break;
                    case '—':
                        temp.push(Sign.Long);
                        break;
                    case '|':
                        temp.push(Sign.Pause);
                        break;
                    default:
                        throw new Error('unknown character');
                }
            }

            morse.push(new MorseCode(temp));
        }

        const text = dic.convertMorseToText(morse);
        console.log(text);
        document.getElementById('morseConvOut').innerHTML = text;
    }
}

function init() {
    document.getElementById('textConvBtn').addEventListener('click', () => {
        convertTextToMorse();
    });

    document.getElementById('morseConvBtn').addEventListener('click', () => {
        convertMorseToText();
    });
}

document.addEventListener('DOMContentLoaded', () => {
    init();
});