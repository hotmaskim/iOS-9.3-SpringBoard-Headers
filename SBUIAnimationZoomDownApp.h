/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, July 26, 2016 at 1:11:32 AM Pacific Daylight Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SBUIMainScreenAnimationController.h>
#import <SpringBoard/SBUIAnimationZoomUpDown.h>

@class UIView, SBAppStatusBarTransitionInfo, BSAnimationSettings, FBWindowContextHostManager, SBSceneLayoutAnimationWrapperView, SBAppStatusBarSettingsAssertion, NSString;

@interface SBUIAnimationZoomDownApp : SBUIMainScreenAnimationController <SBUIAnimationZoomUpDown> {

	UIView* _viewToAnimate;
	SBAppStatusBarTransitionInfo* _appStatusBarTransitionInfo;
	BSAnimationSettings* _animationSettings;
	FBWindowContextHostManager* _deactivatingContextHostManager;
	SBSceneLayoutAnimationWrapperView* _wrapperView;
	SBAppStatusBarSettingsAssertion* _hideStatusBarAssertion;
	BOOL _zoomFullLayoutBounds;

}

@property (readonly) SBAppStatusBarTransitionInfo * appStatusBarTransitionInfo;              //@synthesize appStatusBarTransitionInfo=_appStatusBarTransitionInfo - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) BSAnimationSettings * animationSettings;                          //@synthesize animationSettings=_animationSettings - In the implementation block
-(id)initWithTransitionContextProvider:(id)arg1 ;
-(void)_cleanupAnimation;
-(void)_prepareAnimation;
-(id)deactivatingApp;
-(void)_animateWallpaperWithFactory:(id)arg1 ;
-(void)cleanupZoom;
-(void)prepareZoom;
-(id)animateZoomWithCompletion:(/*^block*/id)arg1 ;
-(double)_animationDelay;
-(id)_viewsForAnimationStepping;
-(void)setAnimatableWrapperView:(id)arg1 ;
-(SBAppStatusBarTransitionInfo *)appStatusBarTransitionInfo;
-(id)initWithTransitionContextProvider:(id)arg1 zoomFullLayoutBounds:(BOOL)arg2 ;
-(id)appStatusBarTransitionInfoWithStartEffectivelyHidden:(BOOL)arg1 endStyleRequest:(id)arg2 endOrientation:(long long)arg3 ;
-(BOOL)prefersLayerHostSnapshot;
-(void)dealloc;
-(BSAnimationSettings *)animationSettings;
-(void)setAnimationSettings:(BSAnimationSettings *)arg1 ;
-(double)_animationDuration;
-(void)_startAnimation;
@end
