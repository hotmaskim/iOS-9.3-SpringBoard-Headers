/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, July 26, 2016 at 1:11:30 AM Pacific Daylight Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SBUIMainScreenAnimationController.h>

@class SBRemoteAlertAdapter, SBAppStatusBarSettingsAssertion, SBAlertManager, SBWindowSelfHostWrapper, UIView;

@interface SBUIAnimationFadeRemoteAlertToApps : SBUIMainScreenAnimationController {

	SBRemoteAlertAdapter* _alert;
	SBAppStatusBarSettingsAssertion* _hideStatusBarAssertion;
	SBAlertManager* _alertManager;
	SBWindowSelfHostWrapper* _appContextHostWrapper;
	UIView* _alertContextHostView;

}
-(id)initWithTransitionContextProvider:(id)arg1 ;
-(id)_getTransitionWindow;
-(void)_cleanupAnimation;
-(void)_prepareAnimation;
-(void)dealloc;
-(double)animationDuration;
-(void)_setHidden:(BOOL)arg1 ;
-(void)_startAnimation;
@end
