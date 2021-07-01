//
//  CFWSDKDefines.h
//  CFWSDK
//
//  Created by bruce on 16/3/8.
//  Copyright © 2016年. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <StoreKit/StoreKit.h>

//登陆相关的
extern NSString *const CFW_LOGIN_NOTIFICATION;              //登录
extern NSString *const CFW_LOGOUT_NOTIFICATION;             //退出
extern NSString *const CFW_SWITCHACCOUNT_NOTIFICATION;      //切换账号
extern NSString *const CFW_CUSVIEW_CLOSE_NOTIFICATION;      //关闭webview的通知，内部使用
extern NSString *const CFW_CUSVIEW_LOGOUT_NOTIFICATION;     //页面webview，点击退出
extern NSString *const CFW_CUSVIEW_CUSTOMER_NOTIFICATION;   //平台键点开的页面关闭通知

extern NSString *const CFW_INFO_VIEW_CLOSE_NOTIFICATION;   //关闭InfoView

extern NSString *const CFW_TIPS_CUSVIEW_CLOSE_NOTIFICATION;  //TIPS页面 关闭
extern NSString *const CFW_TIPS_CUSVIEW_RESULT_NOTIFICATION;

//GameCenter
extern NSString *const CFW_PRESENT_AUTHVIEWCONTROLLER_NOTIFICATION;
extern NSString *const CFW_LOCALPALYER_AUTH_NOTIFICATION;
extern NSString *const CFW_GAMECENTER_LOGIN;

extern NSString *const NSLOGFLAG;
extern NSString *const CFWREMOVETRANSACTIONS_NOTIFICATION;

//充值
extern NSString *const CFW_ROLE_ID;
extern NSString *const CFW_ROLE_NAME;
extern NSString *const CFW_ROLE_LEVEL;
extern NSString *const CFW_ROLE_COIN;
extern NSString *const CFW_ROLE_MENEY;


//CS选项
extern NSString *const CFW_USERINFO;                 //用户信息
extern NSString *const CFW_FEEDBACK;                 //用户反馈
extern NSString *const CFW_BULLENTIN;                //SDK公告

//
extern NSString *const CFW_LOGIN_JSOC;               //登录
extern NSString *const CFW_LOGIN_COLSE_JSOC;         //web关闭
extern NSString *const CFW_LOGIN_FB_JSOC;            //FB登陆回调
extern NSString *const CFW_LOGIN_GOOGLE_JSOC;        //Google登陆回调
extern NSString *const CFW_LOGOUT_JSOC;              //注销
//extern NSString *const CFW_SHARE_WECHAT_JSOC;        //微信分享回调
extern NSString *const CFW_REVIEW_STAR_JSOC;
extern NSString *const CFW_REMOVE_TRANSCATIONS;      //删除TRANSCATIONS
extern NSString *const CFW_SIMULATED_LOGIN_JSOC;     //模拟登录
extern NSString *const CFW_PSD_CHANGE;               //网页修改密码
extern NSString *const CFW_discrete_Result;

typedef NS_ENUM(NSInteger, CFWSTATUS) {
    message_fail = 0,                       //失败
    message_success = 1,                    //成功
    message_buying_error,                   //有其他订单购买进行中
    message_product_info_error,             //商品信息获取失败
    message_get_order_error,                //用户下单失败
//    message_user_cancel,                  //用户取消支付
    message_user_paid,                      //用户完成支付
    message_user_paid_error,                //用户支付失败
    message_issue_success,                  //物品下发成功
    message_issue_error,                    //物品下发失败
    
    message_cus_logout = 100,               //webview注销
};

typedef NS_ENUM(NSInteger, CFWLoginType) {
    CFW_LOGIN_UNKOWN = 0,        //未知
    CFW_LOGIN_GUEST = 1,         //游客账号登录
    CFW_LOGIN_CFW = 2,            //账号登录
    CFW_LOGIN_GAMECENTER =3,     //gamecenter
    CFW_LOGIN_GOOGLEPLAY = 4,    //googleplay
    CFW_LOGIN_FB = 5,            //Facebook
    CFW_LOGIN_LINE = 6,          //Line
    CFW_LOGIN_TWITTER = 7,       //twitter
    CFW_LOGIN_QQ = 8,            //QQ
    CFW_LOGIN_WECHAT = 9,        //微信
    CFW_LOGIN_APPLEID = 10,      //苹果id登录

};

//回调数据，默认返回失败信息
@interface CFWCallbackModel : NSObject

extern NSString *const CFW_CALLBACK_SUCCESS;      //回调成功
extern NSString *const CFW_CALLBACK_FAIL;         //回调失败

@property (nonatomic, strong) NSString *message;
@property (nonatomic, assign) CFWSTATUS status;
@property (nonatomic, strong) id data;

@end

typedef void  (^CFWCallbackBlock)(CFWCallbackModel *callbackModel);
typedef void  (^CFWCallback)(void);


@interface CFWSDKDefines : NSObject


@end


#pragma mark - 语言类型
//zh-cn 简体中文
//zh-hk 繁体中文
//en 英文
//ja  日文
//th  泰文
//vi  越南
//id  印尼
//de  德文
typedef NS_ENUM(NSInteger, CFWLanguageType) {
    CFW_LANGUAGE_SYSTEM = 0,//取设备的系统语言
    CFW_LANGUAGE_CN,//简体中文
    CFW_LANGUAGE_HK,//繁体中文
    CFW_LANGUAGE_EN,//英文
    CFW_LANGUAGE_JA,//日文
    CFW_LANGUAGE_TH,//泰文
    CFW_LANGUAGE_VI,//越南文
    CFW_LANGUAGE_ID,//印尼文
    CFW_LANGUAGE_DE,//德文
    CFW_LANGUAGE_KO,//韩文
    CFW_LANGUAGE_FR,//法国
    CFW_LANGUAGE_TR,//土耳其
};
#pragma mark - 分享类别

typedef NS_ENUM(NSInteger, CFWShareType){
    
    CFW_SHAREFACEBOOKLINK = 1,    //facebook link
    CFW_SHAREFACEBOOKIMAGE,       //facebook image
    CFW_SHAREINSTAGRAM,           //instagram
    CFW_SHARCFWINE,                //line
    CFW_SHAREWXSESSIONLINK,       //微信会话 link
    CFW_SHAREWXSESSIONIMAGE,      //微信会话 image
    CFW_SHAREWXTIMCFWINCFWINK,      //微信朋友圈 link
    CFW_SHAREWXTIMCFWINEIMAGE,     //微信朋友圈 image

    CFW_SHAREFACEBOOK,           //facebook
    CFW_SHAREWXSESSION,          //微信会话
    CFW_SHAREWXTIMCFWINE,         //微信朋友圈
    
    CFW_SHARETWITTER,            //twitter

};

