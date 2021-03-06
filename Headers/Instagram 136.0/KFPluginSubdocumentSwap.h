//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <FBSharedFramework/KFPluginProtocol-Protocol.h>
#import <FBSharedFramework/KFSubdocumentSwapPluginProtocol-Protocol.h>

@class NSArray, NSString;

@interface KFPluginSubdocumentSwap : NSObject <KFPluginProtocol, KFSubdocumentSwapPluginProtocol>
{
    NSArray *_subdocumentIndices;
    struct Layer *_layer;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *pluginName;
- (void)willPause;
- (void)willPlay;
- (void)didSeekToProgress:(double)arg1;
- (void)didFinishCreatingLayerHierarchy:(id)arg1;
- (void)animationDidLoad;
@property(nonatomic) long long activeSubdocumentIndex;
@property(readonly, nonatomic) NSArray *subdocumentIndices;
- (id)initWithPlugin:(const struct Plugin *)arg1 layer:(struct Layer *)arg2;

@end

