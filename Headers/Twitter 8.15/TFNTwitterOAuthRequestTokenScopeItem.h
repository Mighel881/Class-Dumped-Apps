//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <TFSTwitterCore/TFSModel-Protocol.h>

@class NSArray, NSString;

@interface TFNTwitterOAuthRequestTokenScopeItem : NSObject <TFSModel>
{
    NSString *_itemDescription;
    NSArray *_subItems;
}

@property(readonly, copy, nonatomic) NSArray *subItems; // @synthesize subItems=_subItems;
@property(readonly, copy, nonatomic) NSString *itemDescription; // @synthesize itemDescription=_itemDescription;
- (void).cxx_destruct;
- (id)toBulletString;
- (id)initWithDictionary:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
