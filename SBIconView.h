/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, July 26, 2016 at 1:11:31 AM Pacific Daylight Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <UIKit/UIView.h>
#import <libobjc.A.dylib/_UISettingsKeyObserver.h>
#import <SpringBoard/SBIconObserver.h>
#import <SpringBoard/SBReusableView.h>

@protocol SBIconAccessoryView, SBReusableView, SBIconViewDelegate, SBIconViewObserver;
@class SBIcon, UIView, SBIconImageView, SBIconImageCrossfadeView, SBCloseBoxView, SBFParallaxSettings, SBIconLabelView, SBFolderIconBackgroundView, UILongPressGestureRecognizer, UIPreviewForceInteractionProgress, NSTimer, _UILegibilitySettings, NSString;

@interface SBIconView : UIView <_UISettingsKeyObserver, SBIconObserver, SBReusableView> {

	SBIcon* _icon;
	int _iconLocation;
	UIView* _currentImageView;
	SBIconImageView* _iconImageView;
	SBIconImageCrossfadeView* _crossfadeView;
	UIView*<SBIconAccessoryView> _accessoryView;
	SBCloseBoxView* _closeBox;
	SBFParallaxSettings* _closeBoxParallaxSettings;
	CGPoint _wallpaperRelativeCloseBoxCenter;
	SBIconLabelView* _labelView;
	UIView*<SBReusableView> _labelAccessoryView;
	long long _currentLabelAccessoryType;
	SBFolderIconBackgroundView* _dropGlow;
	UILongPressGestureRecognizer* _shortcutMenuPeekGesture;
	UIPreviewForceInteractionProgress* _shortcutMenuPresentProgress;
	unsigned _drawsLabel : 1;
	unsigned _isEditing : 1;
	unsigned _isPaused : 1;
	unsigned _isGrabbed : 1;
	unsigned _isOverlapping : 1;
	unsigned _refusesRecipientStatus : 1;
	unsigned _highlighted : 1;
	unsigned _launchDisabled : 1;
	unsigned _isJittering : 1;
	unsigned _allowJitter : 1;
	unsigned _touchDownInIcon : 1;
	unsigned _hideLabel : 1;
	unsigned _hideLabelAccessoryView;
	CGPoint _unjitterPoint;
	CGPoint _grabPoint;
	NSTimer* _longPressTimer;
	double _longPressGrabDuration;
	CGRect _visibleImageRect;
	id<SBIconViewDelegate> _delegate;
	id<SBIconViewObserver> _observer;
	_UILegibilitySettings* _legibilitySettings;
	double _iconImageAlpha;
	double _iconAccessoryAlpha;
	double _iconLabelAlpha;
	CGPoint _wallpaperRelativeImageCenter;

}

@property (nonatomic,retain) SBIcon * icon; 
@property (assign,nonatomic,__weak) id<SBIconViewDelegate> delegate;                                       //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic,__weak) id<SBIconViewObserver> observer;                                       //@synthesize observer=_observer - In the implementation block
@property (assign,nonatomic) int location;                                                                 //@synthesize iconLocation=_iconLocation - In the implementation block
@property (nonatomic,retain) _UILegibilitySettings * legibilitySettings;                                   //@synthesize legibilitySettings=_legibilitySettings - In the implementation block
@property (assign,nonatomic) double iconImageAlpha;                                                        //@synthesize iconImageAlpha=_iconImageAlpha - In the implementation block
@property (assign,nonatomic) double iconAccessoryAlpha;                                                    //@synthesize iconAccessoryAlpha=_iconAccessoryAlpha - In the implementation block
@property (assign,nonatomic) double iconLabelAlpha;                                                        //@synthesize iconLabelAlpha=_iconLabelAlpha - In the implementation block
@property (nonatomic,retain) UILongPressGestureRecognizer * shortcutMenuPeekGesture;                       //@synthesize shortcutMenuPeekGesture=_shortcutMenuPeekGesture - In the implementation block
@property (nonatomic,retain) UIPreviewForceInteractionProgress * shortcutMenuPresentProgress;              //@synthesize shortcutMenuPresentProgress=_shortcutMenuPresentProgress - In the implementation block
@property (assign,nonatomic) BOOL isEditing; 
@property (nonatomic,readonly) BOOL shouldShowLabelAccessoryView; 
@property (nonatomic,readonly) long long currentLabelAccessoryType;                                        //@synthesize currentLabelAccessoryType=_currentLabelAccessoryType - In the implementation block
@property (assign,nonatomic) CGPoint wallpaperRelativeImageCenter;                                         //@synthesize wallpaperRelativeImageCenter=_wallpaperRelativeImageCenter - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(CGSize)defaultIconSize;
+(CGSize)defaultVisibleIconImageSize;
+(CGSize)defaultIconImageSize;
+(CGPoint)defaultIconImageCenter;
+(CGRect)_rectForLayoutMetric:(int)arg1 ;
+(double)_labelHeight;
+(int)_defaultIconFormat;
+(CGRect)defaultIconImageFrame;
+(double)labelAccessoryViewRightMargin;
+(BOOL)canShowLabelAccessoryView;
+(id)_jitterPositionAnimation;
+(id)_jitterTransformAnimation;
+(CGSize)maxLabelSize;
-(void)setIsEditing:(BOOL)arg1 ;
-(void)_backgroundContrastDidChange:(id)arg1 ;
-(void)removeAllIconAnimations;
-(void)setWallpaperRelativeImageCenter:(CGPoint)arg1 ;
-(CGPoint)iconImageCenter;
-(BOOL)canReceiveGrabbedIcon:(id)arg1 ;
-(void)setIsEditing:(BOOL)arg1 animated:(BOOL)arg2 ;
-(BOOL)isTouchDownInIcon;
-(void)setAllowJitter:(BOOL)arg1 ;
-(void)setIconPosition:(CGPoint)arg1 ;
-(void)setIsGrabbed:(BOOL)arg1 ;
-(void)setIsOverlapping:(BOOL)arg1 ;
-(void)prepareDropGlow;
-(void)showDropGlow:(BOOL)arg1 ;
-(void)removeDropGlow;
-(id)dropGlow;
-(void)setShortcutMenuPeekGesture:(UILongPressGestureRecognizer *)arg1 ;
-(void)setShortcutMenuPresentProgress:(UIPreviewForceInteractionProgress *)arg1 ;
-(BOOL)isGrabbed;
-(UILongPressGestureRecognizer *)shortcutMenuPeekGesture;
-(UIPreviewForceInteractionProgress *)shortcutMenuPresentProgress;
-(void)setIconImageAndAccessoryAlpha:(double)arg1 ;
-(CGSize)iconImageVisibleSize;
-(void)iconAccessoriesDidUpdate:(id)arg1 ;
-(void)iconLaunchEnabledDidChange:(id)arg1 ;
-(id)iconImageSnapshot;
-(CGRect)iconImageFrame;
-(double)iconImageAlpha;
-(void)setIconLabelAlpha:(double)arg1 ;
-(void)setRefusesRecipientStatus:(BOOL)arg1 ;
-(BOOL)isInDock;
-(void)setSuppressesBlurryBackgroundChanges:(BOOL)arg1 ;
-(void)setLabelHidden:(BOOL)arg1 ;
-(void)setLabelAccessoryViewHidden:(BOOL)arg1 ;
-(void)cancelLongPressTimer;
-(void)_updateJitter;
-(void)_updateIconImageViewAnimated:(BOOL)arg1 ;
-(void)_updateLabelAccessoryView;
-(void)_updateProgressAnimated:(BOOL)arg1 ;
-(void)_updateAccessoryViewWithAnimation:(BOOL)arg1 ;
-(void)_setIcon:(id)arg1 animated:(BOOL)arg2 ;
-(void)setIconImageAlpha:(double)arg1 ;
-(void)setIconAccessoryAlpha:(double)arg1 ;
-(void)_applyIconImageAlpha:(double)arg1 ;
-(void)_applyIconAccessoryAlpha:(double)arg1 ;
-(void)_applyIconLabelAlpha:(double)arg1 ;
-(CGRect)_frameForImageView;
-(CGRect)_frameForLabel;
-(CGRect)_frameForLabelAccessoryViewWithLabelFrame:(CGRect)arg1 ;
-(CGRect)_frameForAccessoryView;
-(CGPoint)_centerForCloseBox;
-(double)_labelVerticalOffset;
-(CGPoint)_centerForCloseBoxRelativeToVisibleImageFrame:(CGRect)arg1 ;
-(void)_updateAdaptiveColors;
-(id)_labelImageParameters;
-(id)_legibilitySettingsWithParameters:(id)arg1 ;
-(id)_legibilitySettingsWithStyle:(long long)arg1 primaryColor:(id)arg2 ;
-(void)_configureLabelAccessoryViewForType:(long long)arg1 ;
-(void)_createAccessoryViewIfNecessary;
-(void)_updateBrightness;
-(void)prepareToCrossfadeImageWithView:(id)arg1 maskCorners:(BOOL)arg2 trueCrossfade:(BOOL)arg3 anchorPoint:(CGPoint)arg4 ;
-(void)cleanupAfterImageCrossfade;
-(void)setImageCrossfadeFadeFraction:(double)arg1 ;
-(void)setImageCrossfadeMorphFraction:(double)arg1 totalScale:(double)arg2 ;
-(void)_handleSecondHalfLongPressTimer:(id)arg1 ;
-(void)_setPreparingForPotentialShortcutMenuPresentation:(BOOL)arg1 ;
-(void)_delegateTouchEnded:(BOOL)arg1 ;
-(double)grabDurationForEvent:(id)arg1 ;
-(void)_handleFirstHalfLongPressTimer:(id)arg1 ;
-(CGPoint)wallpaperRelativeImageCenter;
-(BOOL)_delegateTapAllowed;
-(BOOL)allowsTapWhileEditing;
-(void)_applyEditingStateAnimated:(BOOL)arg1 ;
-(void)_updateCloseBoxAnimated:(BOOL)arg1 ;
-(BOOL)_isShowingCloseBox;
-(void)_closeBoxTapped;
-(void)setShouldRasterizeImageView:(BOOL)arg1 ;
-(id)initWithContentType:(unsigned long long)arg1 ;
-(void)swapInIcon:(id)arg1 ;
-(CGRect)_frameForVisibleImage;
-(void)invalidateLabelLayoutGeometry;
-(id)_legibilitySettingsWithPrimaryColor:(id)arg1 ;
-(BOOL)shouldShowLabelAccessoryView;
-(void)_recursiveNotifyInteractionTintColorDidChangeForReasons:(unsigned long long)arg1 ;
-(void)_recursivelyUpdateBackdropMaskFrames;
-(void)prepareToCrossfadeImageWithView:(id)arg1 maskCorners:(BOOL)arg2 trueCrossfade:(BOOL)arg3 ;
-(void)setTouchDownInIcon:(BOOL)arg1 ;
-(UIEdgeInsets)snapshotEdgeInsets;
-(long long)currentLabelAccessoryType;
-(double)iconAccessoryAlpha;
-(double)iconLabelAlpha;
-(void)setDelegate:(id<SBIconViewDelegate>)arg1 ;
-(void)dealloc;
-(BOOL)pointInside:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)didMoveToWindow;
-(void)setFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(id<SBIconViewDelegate>)delegate;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesMoved:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(void)pressesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)pressesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)pressesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(void)pressesChanged:(id)arg1 withEvent:(id)arg2 ;
-(id)_automationID;
-(BOOL)_shouldAnimatePropertyWithKey:(id)arg1 ;
-(id)tintColor;
-(void)setHighlighted:(BOOL)arg1 ;
-(BOOL)isHighlighted;
-(void)_updateLabel;
-(BOOL)isEditing;
-(void)prepareForReuse;
-(BOOL)pointMostlyInside:(CGPoint)arg1 withEvent:(id)arg2 ;
-(id<SBIconViewObserver>)observer;
-(void)setObserver:(id<SBIconViewObserver>)arg1 ;
-(void)setIcon:(SBIcon *)arg1 ;
-(void)settings:(id)arg1 changedValueForKey:(id)arg2 ;
-(void)setPaused:(BOOL)arg1 ;
-(int)location;
-(id)_labelImage;
-(void)setLegibilitySettings:(_UILegibilitySettings *)arg1 ;
-(_UILegibilitySettings *)legibilitySettings;
-(SBIcon *)icon;
-(void)setLocation:(int)arg1 ;
-(id)labelView;
-(id)_iconImageView;
@end

