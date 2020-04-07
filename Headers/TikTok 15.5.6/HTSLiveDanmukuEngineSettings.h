//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol HTSLiveViewHierarchyProvider;

@interface HTSLiveDanmukuEngineSettings : NSObject
{
    _Bool _isRTL;
    _Bool _enableNormalDanmuku;
    double _fontSize;
    unsigned long long _position;
    double _speed;
    double _alpha;
    double _normalChannelHeight;
    double _seniorChannelHeight;
    long long _scene;
    long long _orientation;
    id <HTSLiveViewHierarchyProvider> _viewProvider;
    struct CGRect _fullFrame;
    struct CGRect _seniorFrame;
    struct CGRect _upPositionFrame;
    struct CGRect _downPositionFrame;
    struct CGRect _fullPositionFrame;
    struct CGRect _projectDNormalDanmukuFrame;
}

+ (id)defaultSettings;
@property(nonatomic) struct CGRect projectDNormalDanmukuFrame; // @synthesize projectDNormalDanmukuFrame=_projectDNormalDanmukuFrame;
@property(retain, nonatomic) id <HTSLiveViewHierarchyProvider> viewProvider; // @synthesize viewProvider=_viewProvider;
@property(nonatomic) long long orientation; // @synthesize orientation=_orientation;
@property(nonatomic) long long scene; // @synthesize scene=_scene;
@property(nonatomic) double seniorChannelHeight; // @synthesize seniorChannelHeight=_seniorChannelHeight;
@property(nonatomic) double normalChannelHeight; // @synthesize normalChannelHeight=_normalChannelHeight;
@property(nonatomic) struct CGRect fullPositionFrame; // @synthesize fullPositionFrame=_fullPositionFrame;
@property(nonatomic) struct CGRect downPositionFrame; // @synthesize downPositionFrame=_downPositionFrame;
@property(nonatomic) struct CGRect upPositionFrame; // @synthesize upPositionFrame=_upPositionFrame;
@property(nonatomic) double alpha; // @synthesize alpha=_alpha;
@property(nonatomic) _Bool enableNormalDanmuku; // @synthesize enableNormalDanmuku=_enableNormalDanmuku;
@property(nonatomic) struct CGRect seniorFrame; // @synthesize seniorFrame=_seniorFrame;
@property(nonatomic) _Bool isRTL; // @synthesize isRTL=_isRTL;
@property(nonatomic) double speed; // @synthesize speed=_speed;
@property(nonatomic) struct CGRect fullFrame; // @synthesize fullFrame=_fullFrame;
@property(nonatomic) unsigned long long position; // @synthesize position=_position;
@property(nonatomic) double fontSize; // @synthesize fontSize=_fontSize;
- (void).cxx_destruct;
- (void)fragmentOrientationChanged:(long long)arg1;
- (void)resetFrames;
- (struct CGRect)normalDanmukuFrame;
- (id)init;

@end
