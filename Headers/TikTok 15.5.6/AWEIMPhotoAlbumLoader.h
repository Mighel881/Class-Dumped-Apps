//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSDate, NSMutableDictionary;

@interface AWEIMPhotoAlbumLoader : NSObject
{
    NSDate *_date;
    NSArray *_identifiers;
    NSMutableDictionary *_loadStatusObjs;
    long long _iCloudAssetCount;
    CDUnknownBlockType _completionBlock;
}

@property(copy, nonatomic) CDUnknownBlockType completionBlock; // @synthesize completionBlock=_completionBlock;
@property(nonatomic) long long iCloudAssetCount; // @synthesize iCloudAssetCount=_iCloudAssetCount;
@property(retain, nonatomic) NSMutableDictionary *loadStatusObjs; // @synthesize loadStatusObjs=_loadStatusObjs;
@property(copy, nonatomic) NSArray *identifiers; // @synthesize identifiers=_identifiers;
@property(retain, nonatomic) NSDate *date; // @synthesize date=_date;
- (void).cxx_destruct;
- (void)checkAllFinished;
- (void)handleRequestResultImageData:(id)arg1 info:(id)arg2 assetIdentifier:(id)arg3;
- (void)handleRequestResultURLAsset:(id)arg1 info:(id)arg2 asset:(id)arg3 requestDate:(id)arg4;
- (void)loadAssets:(id)arg1 iCloudCallback:(CDUnknownBlockType)arg2 completion:(CDUnknownBlockType)arg3;
- (_Bool)allTaskFinished;

@end
