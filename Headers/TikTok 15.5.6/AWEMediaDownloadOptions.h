//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class AWEAwemeModel, NSString, NSURL;

@interface AWEMediaDownloadOptions : NSObject
{
    _Bool _shouldMuteVideo;
    _Bool _needsSaveToAlbum;
    _Bool _needsAssetAfterDownload;
    _Bool _awemeIsLongItem;
    AWEAwemeModel *_awemeModel;
    unsigned long long _downloadType;
    NSURL *_destinationURL;
    NSString *_enterFrom;
    NSString *_enterMethod;
    NSString *_sharePlatform;
}

@property(nonatomic) _Bool awemeIsLongItem; // @synthesize awemeIsLongItem=_awemeIsLongItem;
@property(copy, nonatomic) NSString *sharePlatform; // @synthesize sharePlatform=_sharePlatform;
@property(copy, nonatomic) NSString *enterMethod; // @synthesize enterMethod=_enterMethod;
@property(copy, nonatomic) NSString *enterFrom; // @synthesize enterFrom=_enterFrom;
@property(nonatomic) _Bool needsAssetAfterDownload; // @synthesize needsAssetAfterDownload=_needsAssetAfterDownload;
@property(nonatomic) _Bool needsSaveToAlbum; // @synthesize needsSaveToAlbum=_needsSaveToAlbum;
@property(nonatomic) _Bool shouldMuteVideo; // @synthesize shouldMuteVideo=_shouldMuteVideo;
@property(retain, nonatomic) NSURL *destinationURL; // @synthesize destinationURL=_destinationURL;
@property(nonatomic) unsigned long long downloadType; // @synthesize downloadType=_downloadType;
@property(retain, nonatomic) AWEAwemeModel *awemeModel; // @synthesize awemeModel=_awemeModel;
- (void).cxx_destruct;

@end

