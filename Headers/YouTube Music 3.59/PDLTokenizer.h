//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface PDLTokenizer : NSObject
{
}

+ (id)toTokens:(id)arg1;
+ (id)toTokens:(id)arg1 startIndex:(int)arg2;
+ (_Bool)hasSubtokenSeparator:(id)arg1;
+ (id)splitSubtokens:(id)arg1;
+ (id)splitOnWhitespace:(id)arg1;
+ (id)subtokenizeEmailAddress:(id)arg1;
+ (id)subtokenizeString:(id)arg1;
+ (id)subtokenizeStringWithOriginal:(id)arg1;
+ (id)tokenizeString:(id)arg1;

@end

