//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface DBDbxImportedPhoto : NSObject
{
    NSString *_localId;
    NSString *_cuHash8;
}

+ (id)dbxImportedPhotoWithLocalId:(id)arg1 cuHash8:(id)arg2;
@property(readonly, nonatomic) NSString *cuHash8; // @synthesize cuHash8=_cuHash8;
@property(readonly, nonatomic) NSString *localId; // @synthesize localId=_localId;
- (void).cxx_destruct;
- (id)description;
- (id)initWithLocalId:(id)arg1 cuHash8:(id)arg2;

@end
