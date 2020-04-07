//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class ACCMusicModel, NSString, NSURL;

@protocol ACCVideoMusicProtocol <NSObject>
- (ACCMusicModel *)defaultPhotoMovieMusic;
- (void)refreshMusicItem:(ACCMusicModel *)arg1 completion:(void (^)(void))arg2;
- (void)fetchLocalURLForMusic:(ACCMusicModel *)arg1 lyricURL:(NSString *)arg2 withProgress:(void (^)(float))arg3 completion:(void (^)(NSURL *, NSURL *, NSError *))arg4;
- (void)fetchLocalURLForMusic:(ACCMusicModel *)arg1 withProgress:(void (^)(float))arg2 completion:(void (^)(NSURL *, NSError *))arg3;
- (NSURL *)localLyricURLForMusic:(ACCMusicModel *)arg1;
- (NSURL *)localURLForMusic:(ACCMusicModel *)arg1;
@end
