//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSMutableDictionary;

@interface NFPlayerView : UIView
{
    NSMutableDictionary *_layerMap;
}

@property(retain, nonatomic) NSMutableDictionary *layerMap; // @synthesize layerMap=_layerMap;
- (void).cxx_destruct;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)disposeLayerForPlayer:(id)arg1 forPlaybackId:(id)arg2;
- (void)presentPlayer:(id)arg1 forPlaybackId:(id)arg2;
- (id)prepareLayerForPlayer:(id)arg1 playbackId:(id)arg2;
- (id)playerLayerForPlayer:(id)arg1 playbackId:(id)arg2;
- (void)bringSublayerToFront:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

