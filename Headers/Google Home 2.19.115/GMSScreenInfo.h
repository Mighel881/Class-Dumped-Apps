//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface GMSScreenInfo : NSObject
{
    _Bool _isCarPlayScreen;
    double _scale;
    double _cameraPixelScale;
    long long _maximumFramesPerSecond;
    struct CGSize _logicalSize;
}

@property(readonly, nonatomic) _Bool isCarPlayScreen; // @synthesize isCarPlayScreen=_isCarPlayScreen;
@property(readonly, nonatomic) long long maximumFramesPerSecond; // @synthesize maximumFramesPerSecond=_maximumFramesPerSecond;
@property(readonly, nonatomic) struct CGSize logicalSize; // @synthesize logicalSize=_logicalSize;
@property(readonly, nonatomic) double cameraPixelScale; // @synthesize cameraPixelScale=_cameraPixelScale;
@property(readonly, nonatomic) double scale; // @synthesize scale=_scale;
@property(readonly, nonatomic) int mapTileRequestTextSize;
@property(readonly, nonatomic) int clientInformationIOSScreenScale;
@property(readonly, nonatomic) int clientPropertiesScreenPixelDensity;
@property(readonly, nonatomic) struct CGSize pixelSize;
- (id)initWithUIScreen:(id)arg1;

@end

