//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class AWEAwemeModel, NSString;
@protocol IESVideoPlayerProtocol;

@protocol AWEAwemePlayVideoControllerProtocol <NSObject>
@property(nonatomic) _Bool forbidUpdatePlayer;
@property(retain, nonatomic) NSString *referString;
@property(readonly, copy, nonatomic) CDUnknownBlockType playVideo;
@property(nonatomic) long long playState;
@property(retain, nonatomic) id <IESVideoPlayerProtocol> playerController;
@property(retain, nonatomic) AWEAwemeModel *model;
- (void)updatePlayerController:(id)arg1 withPlayVideoVC:(id)arg2;
- (void)reset;
- (_Bool)stop;
- (_Bool)pause;
- (_Bool)play;
- (void)prepareForDisplay;
- (void)updatePlayerIfNeeded;
@end
