class CfgMovesBasic;
class CfgMovesMaleSdr: CfgMovesBasic
{
    class States
    {
        class AmovPercMwlkSrasWrflDf;
        class AmovPercMtacSrasWrflDf: AmovPercMwlkSrasWrflDf
        {
            file = "a3\anims_f\data\anim\sdr\mov\erc\wlk\ras\rfl\amovpercmwlksraswrfldf.rtm";
            speed = 1.75;
            stamina = 1;
            static = 1;
            aimPrecision = 1;
        };
        class AadjPercMtacSrasWrflDf_left: AmovPercMtacSrasWrflDf
        {
            file = "a3\anims_f\data\anim\sdr\adj\erc\wlk\ras\rfl\aadjpercmwlksraswrfldf_left.rtm";
            soundEdge[] = {1,0.5,0.5,0.01};
        };
        class AmovPercMtacSrasWrflDfl: AmovPercMtacSrasWrflDf
        {
            file = "a3\anims_f\data\anim\sdr\mov\erc\wlk\ras\rfl\amovpercmwlksraswrfldfl.rtm";
        };
        class AadjPercMtacSrasWrflDfl_left: AmovPercMtacSrasWrflDfl
        {
            file = "a3\anims_f\data\anim\sdr\adj\erc\wlk\ras\rfl\aadjpercmwlksraswrfldfl_left.rtm";
            soundEdge[] = {1,0.5,0.5,0.01};
        };
        class AmovPercMtacSrasWrflDfr: AmovPercMtacSrasWrflDf
        {
            file = "a3\anims_f\data\anim\sdr\mov\erc\wlk\ras\rfl\amovpercmwlksraswrfldfr.rtm";
        };
        class AadjPercMtacSrasWrflDfr_left: AmovPercMtacSrasWrflDfr
        {
            file = "a3\anims_f\data\anim\sdr\adj\erc\wlk\ras\rfl\aadjpercmwlksraswrfldfr_left.rtm";
            soundEdge[] = {1,0.5,0.5,0.01};
        };
        class AmovPercMtacSrasWrflDl: AmovPercMtacSrasWrflDf
        {
            speed = 0.75;
            aimPrecision = 1;
        };
        class AmovPercMtacSrasWrflDb: AmovPercMtacSrasWrflDf
        {
            speed = 0.75;
            aimPrecision = 1;
        };
        class AmovPercMtacSrasWrflDr: AmovPercMtacSrasWrflDf
        {
            speed = 0.75;
            aimPrecision = 1;
        };
        class AmovPercMwlkSrasWpstDf;
        class AmovPercMtacSrasWpstDf: AmovPercMwlkSrasWpstDf
        {
            file = "a3\anims_f\data\anim\sdr\mov\erc\wlk\ras\pst\amovpercmwlksraswpstdf.rtm";
            speed = 1.0;
            stamina = 1;
            static = 1;
            aimPrecision = 1;
        };
        class AmovPercMtacSrasWpstDfl: AmovPercMtacSrasWpstDf
        {
            file = "a3\anims_f\data\anim\sdr\mov\erc\wlk\ras\pst\amovpercmwlksraswpstdfl.rtm";
        };
        class AmovPercMtacSrasWpstDfr: AmovPercMtacSrasWpstDf
        {
            file = "a3\anims_f\data\anim\sdr\mov\erc\wlk\ras\pst\amovpercmwlksraswpstdfr.rtm";
        };
        class AmovPercMtacSrasWpstDl: AmovPercMtacSrasWpstDf
        {
            speed = 1.75;
            aimPrecision = 1;
        };
        class AmovPercMtacSrasWpstDb: AmovPercMtacSrasWpstDf
        {
            speed = 1.0;
            aimPrecision = 1;
        };
        class AmovPercMtacSrasWpstDr: AmovPercMtacSrasWpstDf
        {
            speed = 1.75;
            aimPrecision = 1;
        };
        class TransAnimBase;
        class AmovPercMstpSrasWrflDnon_AmovPercMstpSrasWpstDnon: TransAnimBase
        {
            speed = 2.0;
        };
        class AmovPercMstpSrasWrflDnon_AmovPercMstpSrasWpstDnon_end: AmovPercMstpSrasWrflDnon_AmovPercMstpSrasWpstDnon
        {
            speed = 3.0;
        };
    };
};