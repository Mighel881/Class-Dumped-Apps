//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSData;

@interface DBDbxAccountPhoto : NSObject
{
    _Bool _photoExists;
    NSData *_imgData;
}

+ (id)dbxAccountPhotoWithImgData:(id)arg1 photoExists:(_Bool)arg2;
@property(readonly, nonatomic) _Bool photoExists; // @synthesize photoExists=_photoExists;
@property(readonly, nonatomic) NSData *imgData; // @synthesize imgData=_imgData;
- (void).cxx_destruct;
- (id)description;
- (id)initWithImgData:(id)arg1 photoExists:(_Bool)arg2;

@end

