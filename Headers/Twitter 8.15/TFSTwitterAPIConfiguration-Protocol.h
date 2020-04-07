//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TFSTwitterAPI/NSObject-Protocol.h>

@class NSArray, NSDictionary, NSString, NSURLCache;
@protocol TFSTwitterAPIConfiguration, TFSTwitterAPIURLBaseProvider;

@protocol TFSTwitterAPIConfiguration <NSObject>
@property(readonly, copy, nonatomic) NSString *cardsPlatformIdentifier;
@property(readonly, nonatomic) NSURLCache *URLCache;
@property(readonly, nonatomic) id <TFSTwitterAPIURLBaseProvider> URLBaseProvider;
- (id <TFSTwitterAPIConfiguration>)configurationWithAdditionalStatusParameters:(NSDictionary *)arg1;
- (NSArray *)additionalContentEncoders;
- (NSArray *)additionalContentDecoders;
- (NSDictionary *)momentsParametersDictionary;
- (NSDictionary *)cardsParametersDictionary;
- (NSDictionary *)userParametersDictionary;
- (NSDictionary *)statusParametersDictionary;
@end
