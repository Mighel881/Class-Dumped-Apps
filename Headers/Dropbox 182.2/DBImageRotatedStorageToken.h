//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class DBImageStorageToken;

@interface DBImageRotatedStorageToken : NSObject
{
    DBImageStorageToken *_storageToken;
    long long _rotationOffset;
}

@property(readonly, nonatomic) long long rotationOffset; // @synthesize rotationOffset=_rotationOffset;
@property(readonly, nonatomic) DBImageStorageToken *storageToken; // @synthesize storageToken=_storageToken;
- (void).cxx_destruct;
- (id)initWithStorageToken:(id)arg1 rotationOffset:(long long)arg2;

@end
