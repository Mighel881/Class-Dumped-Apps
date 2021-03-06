//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <DropboxExtensions/NSCopying-Protocol.h>

@class NSString;

@interface FPRConfiguration : NSObject <NSCopying>
{
    _Bool _autoPush;
    NSString *_appID;
    NSString *_APIKey;
}

+ (id)configurationWithAppID:(id)arg1 APIKey:(id)arg2 autoPush:(_Bool)arg3;
@property(readonly, nonatomic, getter=isAutoPush) _Bool autoPush; // @synthesize autoPush=_autoPush;
@property(readonly, copy, nonatomic) NSString *APIKey; // @synthesize APIKey=_APIKey;
@property(readonly, copy, nonatomic) NSString *appID; // @synthesize appID=_appID;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithAppID:(id)arg1 APIKey:(id)arg2 autoPush:(_Bool)arg3;
- (id)init;

@end

