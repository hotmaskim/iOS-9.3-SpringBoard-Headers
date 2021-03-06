/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, July 26, 2016 at 1:11:30 AM Pacific Daylight Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/_UISettings.h>

@interface SBReachabilitySettings : _UISettings {

	BOOL _allowOnAllDevices;
	double _fingerOnMesaRequiredDuration;
	unsigned long long _numberOfTapsForTapTrigger;
	double _tapToTapMaxInterval;
	double _debounceFingerOff;
	double _debounceHomeButtonPress;
	double _reachabilityDefaultKeepAlive;
	double _reachabilityInteractiveKeepAlive;
	double _yOffsetFactor;
	double _mass;
	double _stiffness;
	double _damping;
	double _epsilon;
	double _reducedMotionSlideDuration;

}

@property (assign,nonatomic) double fingerOnMesaRequiredDuration;                       //@synthesize fingerOnMesaRequiredDuration=_fingerOnMesaRequiredDuration - In the implementation block
@property (assign,nonatomic) BOOL allowOnAllDevices;                                    //@synthesize allowOnAllDevices=_allowOnAllDevices - In the implementation block
@property (assign,nonatomic) unsigned long long numberOfTapsForTapTrigger;              //@synthesize numberOfTapsForTapTrigger=_numberOfTapsForTapTrigger - In the implementation block
@property (assign,nonatomic) double tapToTapMaxInterval;                                //@synthesize tapToTapMaxInterval=_tapToTapMaxInterval - In the implementation block
@property (assign,nonatomic) double debounceFingerOff;                                  //@synthesize debounceFingerOff=_debounceFingerOff - In the implementation block
@property (assign,nonatomic) double debounceHomeButtonPress;                            //@synthesize debounceHomeButtonPress=_debounceHomeButtonPress - In the implementation block
@property (assign,nonatomic) double reachabilityDefaultKeepAlive;                       //@synthesize reachabilityDefaultKeepAlive=_reachabilityDefaultKeepAlive - In the implementation block
@property (assign,nonatomic) double reachabilityInteractiveKeepAlive;                   //@synthesize reachabilityInteractiveKeepAlive=_reachabilityInteractiveKeepAlive - In the implementation block
@property (assign,nonatomic) double yOffsetFactor;                                      //@synthesize yOffsetFactor=_yOffsetFactor - In the implementation block
@property (assign,nonatomic) double mass;                                               //@synthesize mass=_mass - In the implementation block
@property (assign,nonatomic) double stiffness;                                          //@synthesize stiffness=_stiffness - In the implementation block
@property (assign,nonatomic) double damping;                                            //@synthesize damping=_damping - In the implementation block
@property (assign,nonatomic) double epsilon;                                            //@synthesize epsilon=_epsilon - In the implementation block
@property (assign,nonatomic) double reducedMotionSlideDuration;                         //@synthesize reducedMotionSlideDuration=_reducedMotionSlideDuration - In the implementation block
+(id)settingsControllerModule;
-(BOOL)allowOnAllDevices;
-(double)reachabilityInteractiveKeepAlive;
-(double)reachabilityDefaultKeepAlive;
-(unsigned long long)numberOfTapsForTapTrigger;
-(double)debounceHomeButtonPress;
-(double)tapToTapMaxInterval;
-(double)debounceFingerOff;
-(void)setNumberOfTapsForTapTrigger:(unsigned long long)arg1 ;
-(void)setTapToTapMaxInterval:(double)arg1 ;
-(void)setDebounceFingerOff:(double)arg1 ;
-(void)setFingerOnMesaRequiredDuration:(double)arg1 ;
-(void)setAllowOnAllDevices:(BOOL)arg1 ;
-(void)setReachabilityDefaultKeepAlive:(double)arg1 ;
-(void)setReachabilityInteractiveKeepAlive:(double)arg1 ;
-(void)setDebounceHomeButtonPress:(double)arg1 ;
-(void)setYOffsetFactor:(double)arg1 ;
-(void)setReducedMotionSlideDuration:(double)arg1 ;
-(double)reducedMotionSlideDuration;
-(double)fingerOnMesaRequiredDuration;
-(double)epsilon;
-(void)setEpsilon:(double)arg1 ;
-(void)setStiffness:(double)arg1 ;
-(void)setDamping:(double)arg1 ;
-(void)setMass:(double)arg1 ;
-(void)setDefaultValues;
-(double)damping;
-(double)mass;
-(id)animationFactory;
-(double)yOffsetFactor;
-(double)stiffness;
@end

