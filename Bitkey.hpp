#ifndef CLASS_BITKEY_H
#define CLASS_BITKEY_H

#include <BitkeyUtil.hpp>

class Bitkey {
    private:
        BitkeyUtil bitkeyUtil;

        const char * hex2bin(const char *hex, char *bin, size_t binsize);
    public:
		/* ====================================================================== */
		/**
		 * @brief  検証用クラスのコンストラクタ
		 *
		 * @param[Bitkey*] p_this    Bitkeyインスタンス
		 * @Param[PrincipalKeyList*] (*privateFuncGetPrincipalKeyList)() プリンシパルキーリストを読み込み、配列を作成する関数
		 * @Param[NumberRistrictedKeyList*] (*privateFuncGetNumberRestrictedKeyList)()  回数制限キーのログを読み込み、配列を作成する関数
		 * @Param[void] (*privateFuncSetNumberRestrictedKeyList)() 回数制限キーのログを書き込む関数
		 * @Param[long] (*privateFuncGetTime)() 現在時刻を取得する関数
		 *
		 *
		 * @return  Bitkey
		 *
		 * @note
		 *
		 */
		/* ====================================================================== */
        Bitkey (
            BitkeyUtil _bitkeyUtil);

		/* ====================================================================== */
		/**
		 * @brief  解錠できるかどうか検証する
		 *
		 * @param[unsigned char] *hole    設定されているホール情報
		 * @param[unsigned char] *key     受信した鍵
		 *
		 *
		 * @return  検証結果
		 * 	      0:    解錠OK
		 *        0以外: 解錠NG
		 *
		 * @note
		 *   0以外の返り値に関しては検討中
		 */
		/* ====================================================================== */
        int verifyKey(unsigned char *hole, unsigned char *key);
}


#endif