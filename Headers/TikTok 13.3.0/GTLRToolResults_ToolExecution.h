//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GTLRObject.h"

@class GTLRToolResults_ToolExitCode, NSArray;

@interface GTLRToolResults_ToolExecution : GTLRObject
{
}

+ (id)arrayPropertyToClassMap;

// Remaining properties
@property(retain, nonatomic) NSArray *commandLineArguments; // @dynamic commandLineArguments;
@property(retain, nonatomic) GTLRToolResults_ToolExitCode *exitCode; // @dynamic exitCode;
@property(retain, nonatomic) NSArray *toolLogs; // @dynamic toolLogs;
@property(retain, nonatomic) NSArray *toolOutputs; // @dynamic toolOutputs;

@end
