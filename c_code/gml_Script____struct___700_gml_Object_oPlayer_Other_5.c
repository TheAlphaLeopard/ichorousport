// gml_Script____struct___700_gml_Object_oPlayer_Other_5 @ 0x140c80b40

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
gml_Script____struct___700_gml_Object_oPlayer_Other_5
          (longlong *param_1,longlong *param_2,undefined8 *param_3)

{
  undefined4 uVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  longlong **pplVar6;
  undefined8 *puVar7;
  longlong **pplVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  ulonglong *puVar12;
  double *pdVar13;
  uint uVar14;
  undefined4 uVar15;
  float fVar16;
  ulonglong uVar17;
  double dVar18;
  double dVar19;
  longlong *local_res8;
  longlong *local_res10;
  uint local_res18;
  code *pcVar20;
  ulonglong uVar21;
  undefined1 **ppuVar22;
  undefined8 **ppuVar23;
  longlong ***ppplVar24;
  longlong *plVar25;
  ulonglong in_stack_fffffffffffffcf0;
  longlong *local_308;
  undefined4 uStack_300;
  undefined4 uStack_2fc;
  undefined8 local_2f8;
  undefined4 local_2f0;
  undefined4 local_2ec;
  undefined8 local_2e8;
  undefined4 uStack_2e0;
  undefined4 uStack_2dc;
  longlong *local_2d8;
  undefined4 local_2cc;
  longlong *local_2c8 [2];
  undefined8 local_2b8 [2];
  undefined1 local_2a8 [16];
  undefined1 local_298 [16];
  undefined1 local_288 [12];
  byte local_27c;
  undefined8 local_278;
  byte local_26c;
  undefined8 local_268;
  undefined4 local_260;
  undefined4 local_25c;
  ulonglong local_258;
  undefined4 uStack_250;
  undefined4 uStack_24c;
  undefined4 local_248;
  undefined4 uStack_244;
  undefined4 uStack_240;
  undefined4 uStack_23c;
  undefined8 local_238;
  char *local_230;
  undefined4 local_228;
  longlong **local_220;
  undefined8 *local_218;
  undefined1 *local_210;
  undefined1 *local_208;
  undefined1 *local_200;
  undefined8 *local_1f8;
  double local_1f0;
  uint local_1e4;
  double local_1e0;
  uint local_1d4;
  undefined8 local_1c8;
  undefined4 uStack_1c0;
  undefined4 uStack_1bc;
  undefined8 local_1b8;
  undefined4 local_1ac;
  undefined8 local_1a8;
  undefined4 local_19c;
  undefined8 local_198;
  undefined4 local_18c;
  undefined8 local_188;
  undefined4 local_17c;
  undefined8 local_178;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  ulonglong local_168;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  undefined8 local_158;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined8 local_148;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined8 local_138;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined8 local_128;
  undefined4 local_11c;
  undefined8 local_118;
  undefined4 local_10c;
  undefined8 local_108;
  undefined4 local_fc;
  undefined1 local_f8 [16];
  longlong local_e8;
  undefined1 local_d8 [16];
  longlong local_c8;
  
  local_res18 = 0;
  local_230 = "gml_Script_anon@1377@gml_Object_oPlayer_Other_76";
  local_238 = DAT_141dc7a50;
  local_228 = 0x40;
  pcVar20 = FUN_140041b30;
  DAT_141dc7a50 = &local_238;
  local_res8 = param_1;
  local_res10 = param_2;
  _eh_vector_constructor_iterator_(local_2c8,0x10,6,FUN_1400424d0,FUN_140041b30);
  local_1ac = 0xffffff;
  local_1b8 = 0;
  local_10c = 0xffffff;
  local_118 = 0;
  local_11c = 0xffffff;
  local_128 = 0;
  uVar5 = (**(code **)(*DAT_141a729d8 + 8))(DAT_141a729d8,DAT_141a1ef20);
  uStack_12c = 0xffffff;
  local_138 = 0;
  pplVar6 = (longlong **)(**(code **)(*DAT_141a729d8 + 8))(DAT_141a729d8,DAT_1419f8d88);
  uStack_16c = 0xffffff;
  local_178 = 0;
  uStack_1bc = 0xffffff;
  local_1c8 = (longlong *)0x0;
  local_17c = 0xffffff;
  local_188 = 0;
  local_18c = 0xffffff;
  local_198 = 0;
  local_19c = 0xffffff;
  local_1a8 = 0;
  uStack_13c = 0xffffff;
  local_148 = 0;
  uStack_14c = 0xffffff;
  local_158 = 0;
  local_1d4 = 0xffffff;
  local_1e0 = 0.0;
  local_1e4 = 0xffffff;
  local_1f0 = 0.0;
  local_2ec = 0;
  local_2f8 = 0;
  local_25c = 0;
  local_268 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_228 = 0x42;
  puVar7 = (undefined8 *)(**(code **)(*local_res8 + 8))(local_res8,DAT_141a1f090);
  if (puVar7 != &local_1b8) {
    local_2e8 = (longlong *)*puVar7;
    uStack_2e0 = *(undefined4 *)(puVar7 + 1);
    uStack_2dc = *(undefined4 *)((longlong)puVar7 + 0xc);
    if ((1 << ((byte)local_1ac & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1b8);
    }
    FUN_140041b80(&local_1b8,&local_2e8);
  }
  local_228 = 0x43;
  if ((1 << ((byte)local_2ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_2f8);
  }
  local_2f8 = 0;
  local_2f0 = 0;
  local_2ec = 5;
  pplVar8 = (longlong **)(**(code **)(*local_res8 + 8))(local_res8,DAT_1419f5a58);
  puVar7 = (undefined8 *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_141a1f090);
  uStack_2fc = 0xf;
  local_308 = (longlong *)0x100000000000106;
  FUN_140e87440(&local_308,DAT_1419f5a98,0x80000000,&local_118,
                (ulonglong)pcVar20 & 0xffffffffffffff00,
                in_stack_fffffffffffffcf0 & 0xffffffffffffff00);
  if ((1 << ((byte)uStack_2fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_308);
  }
  if (pplVar8 != local_2c8) {
    local_2e8 = *pplVar8;
    uStack_2e0 = *(undefined4 *)(pplVar8 + 1);
    uStack_2dc = *(undefined4 *)((longlong)pplVar8 + 0xc);
    if ((1 << ((byte)local_2c8[1]._4_4_ & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_2c8);
    }
    FUN_140041b80(local_2c8,&local_2e8);
  }
  local_220 = local_2c8;
  FUN_140e609c0(local_res8);
  uStack_2fc = 0xf;
  local_308 = (longlong *)0x100000000000106;
  uVar9 = FUN_140069500(&local_308);
  ppplVar24 = &local_220;
  puVar11 = &local_118;
  puVar10 = (undefined8 *)FUN_140e63610(uVar9,local_res10,&local_2f8,1,puVar11,ppplVar24);
  if (puVar10 != puVar7) {
    local_2e8 = (longlong *)*puVar10;
    uStack_2e0 = *(undefined4 *)(puVar10 + 1);
    uStack_2dc = *(undefined4 *)((longlong)puVar10 + 0xc);
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar7 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar7);
    }
    FUN_140041b80(puVar7,&local_2e8);
  }
  if ((1 << ((byte)uStack_2fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_308);
  }
  FUN_140e60910(1);
  local_228 = 0x44;
  if ((1 << ((byte)local_2ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_2f8);
  }
  local_2f8 = 0;
  local_2f0 = 0;
  local_2ec = 5;
  pplVar8 = (longlong **)(**(code **)(*local_res8 + 8))(local_res8,DAT_141a1f090);
  uStack_2fc = 0xf;
  local_308 = (longlong *)0x100000000000106;
  FUN_140e87440(&local_308,DAT_1419ff918,0x80000000,&local_128,
                (ulonglong)puVar11 & 0xffffffffffffff00,(ulonglong)ppplVar24 & 0xffffffffffffff00);
  if ((1 << ((byte)uStack_2fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_308);
  }
  if (pplVar8 != local_2c8) {
    local_2e8 = *pplVar8;
    uStack_2e0 = *(undefined4 *)(pplVar8 + 1);
    uStack_2dc = *(undefined4 *)((longlong)pplVar8 + 0xc);
    if ((1 << ((byte)local_2c8[1]._4_4_ & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_2c8);
    }
    FUN_140041b80(local_2c8,&local_2e8);
  }
  local_220 = local_2c8;
  uStack_2fc = 0xf;
  local_308 = (longlong *)0x100000000000106;
  uVar9 = FUN_140069500(&local_308);
  ppplVar24 = &local_220;
  puVar7 = &local_128;
  FUN_140e63610(uVar9,local_res10,&local_2f8,1,puVar7,ppplVar24);
  if ((1 << ((byte)uStack_2fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_308);
  }
  local_228 = 0x45;
  if ((1 << ((byte)local_2ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_2f8);
  }
  local_2f8 = 0;
  local_2f0 = 0;
  local_2ec = 5;
  if ((1 << ((byte)local_25c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_268);
  }
  local_268 = 0;
  local_260 = 0;
  local_25c = 5;
  puVar11 = (undefined8 *)(**(code **)(*local_res8 + 8))(local_res8,DAT_141a1f090);
  uVar21 = (ulonglong)puVar7 & 0xffffffffffffff00;
  FUN_140e87440(uVar5,DAT_1419ef368,0x80000000,&local_138,uVar21,
                (ulonglong)ppplVar24 & 0xffffffffffffff00);
  uVar15 = (undefined4)(uVar21 >> 0x20);
  FUN_140e609c0(DAT_141a729d8);
  FUN_140e645a0(&local_308,gml_Object_oPlayer_Other_5,0);
  if (&local_308 != pplVar6) {
    local_2e8 = local_308;
    uStack_2e0 = uStack_300;
    uStack_2dc = uStack_2fc;
    if ((1 << ((byte)*(undefined4 *)((longlong)pplVar6 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(pplVar6);
    }
    FUN_140041b80(pplVar6,&local_2e8);
  }
  FUN_140e60910(1);
  if (pplVar6 != local_2c8) {
    local_2e8 = *pplVar6;
    uStack_2e0 = *(undefined4 *)(pplVar6 + 1);
    uStack_2dc = *(undefined4 *)((longlong)pplVar6 + 0xc);
    if ((1 << ((byte)local_2c8[1]._4_4_ & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_2c8);
    }
    FUN_140041b80(local_2c8,&local_2e8);
  }
  if ((1 << ((byte)uStack_2fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_308);
  }
  local_220 = local_2c8;
  local_218 = &local_1b8;
  uStack_2fc = *(undefined4 *)((longlong)puVar11 + 0xc);
  uStack_300 = *(undefined4 *)(puVar11 + 1);
  if ((1 << ((byte)uStack_2fc & 0x1f) & 0x46U) == 0) {
    local_308 = (longlong *)*puVar11;
  }
  else {
    FUN_1400419b0(&local_308,puVar11);
  }
  local_res18 = 0x10;
  FUN_1400462a0(&local_308,&local_1b8);
  local_2e8 = local_308;
  uStack_2e0 = uStack_300;
  uStack_2dc = uStack_2fc;
  if ((1 << (local_2a8[0xc] & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_2a8);
  }
  FUN_140041b80(local_2a8,&local_2e8);
  local_res18 = 0;
  if ((1 << ((byte)uStack_2fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_308);
  }
  local_210 = local_2a8;
  uStack_2fc = *(undefined4 *)((longlong)puVar11 + 0xc);
  uStack_300 = *(undefined4 *)(puVar11 + 1);
  if ((1 << ((byte)uStack_2fc & 0x1f) & 0x46U) == 0) {
    local_308 = (longlong *)*puVar11;
  }
  else {
    FUN_1400419b0(&local_308,puVar11);
  }
  local_res18 = 0x20;
  FUN_1400462a0(&local_308,&local_1b8);
  local_2e8 = local_308;
  uStack_2e0 = uStack_300;
  uStack_2dc = uStack_2fc;
  if ((1 << (local_298[0xc] & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_298);
  }
  FUN_140041b80(local_298,&local_2e8);
  local_res18 = 0;
  if ((1 << ((byte)uStack_2fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_308);
  }
  local_208 = local_298;
  local_2e8 = (longlong *)local_138;
  uStack_2e0 = uStack_130;
  uStack_2dc = uStack_12c;
  if ((1 << (local_27c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_288);
  }
  FUN_140041b80(local_288,&local_2e8);
  local_200 = local_288;
  puVar7 = (undefined8 *)
           FUN_140e634e0(local_res8,local_res10,&local_268,4,CONCAT44(uVar15,DAT_1419fd6d8),
                         &local_220);
  if (puVar7 != &local_278) {
    local_2e8 = (longlong *)*puVar7;
    uStack_2e0 = *(undefined4 *)(puVar7 + 1);
    uStack_2dc = *(undefined4 *)((longlong)puVar7 + 0xc);
    if ((1 << (local_26c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_278);
    }
    FUN_140041b80(&local_278,&local_2e8);
  }
  local_1f8 = &local_278;
  ppuVar22 = &local_200;
  gml_Script___remove_listener_from_signal_anon_1472_SignalController_SIGNALS
            (local_res8,local_res10,&local_2f8,2,ppuVar22);
  uVar15 = (undefined4)((ulonglong)ppuVar22 >> 0x20);
  local_228 = 0x47;
  if ((1 << ((byte)local_2ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_2f8);
  }
  local_2f8 = 0;
  local_2f0 = 0;
  local_2ec = 5;
  if ((1 << ((byte)local_25c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_268);
  }
  local_268 = 0;
  local_260 = 0;
  local_25c = 5;
  local_2e8 = (longlong *)CONCAT44(uRam0000000141dc74a4,_DAT_141dc74a0);
  uStack_2e0 = uRam0000000141dc74a8;
  uStack_2dc = uRam0000000141dc74ac;
  if ((1 << ((byte)local_2c8[1]._4_4_ & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_2c8);
  }
  FUN_140041b80(local_2c8,&local_2e8);
  local_220 = local_2c8;
  uStack_24c = 0xf;
  local_258 = 0x100000100000013;
  local_2e8 = (longlong *)0x100000100000013;
  uStack_2e0 = uStack_250;
  uStack_2dc = 0xf;
  if ((1 << ((byte)local_2b8[1]._4_4_ & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_2b8);
  }
  FUN_140041b80(local_2b8,&local_2e8);
  local_218 = local_2b8;
  puVar7 = (undefined8 *)
           FUN_140e634e0(local_res8,local_res10,&local_268,1,CONCAT44(uVar15,DAT_141a0a0d8),
                         &local_220);
  uStack_2fc = *(undefined4 *)((longlong)puVar7 + 0xc);
  uStack_300 = *(undefined4 *)(puVar7 + 1);
  if ((1 << ((byte)uStack_2fc & 0x1f) & 0x46U) == 0) {
    local_308 = (longlong *)*puVar7;
  }
  else {
    FUN_1400419b0(&local_308,puVar7);
  }
  local_res18 = 0x40;
  local_2cc = 7;
  local_2d8 = (longlong *)CONCAT44(local_2d8._4_4_,10);
  FUN_140042560(&local_308,&local_2d8);
  if ((1 << ((byte)local_2cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_2d8);
  }
  local_2e8 = local_308;
  uStack_2e0 = uStack_300;
  uStack_2dc = uStack_2fc;
  if ((1 << (local_2a8[0xc] & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_2a8);
  }
  FUN_140041b80(local_2a8,&local_2e8);
  local_res18 = 0;
  if ((1 << ((byte)uStack_2fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_308);
  }
  local_210 = local_2a8;
  ppuVar23 = &local_218;
  FUN_1403a1810(local_res8,local_res10,&local_2f8,2,ppuVar23);
  uVar15 = (undefined4)((ulonglong)ppuVar23 >> 0x20);
  local_228 = 0x48;
  if ((1 << ((byte)local_2ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_2f8);
  }
  local_2f8 = 0;
  local_2f0 = 0;
  local_2ec = 5;
  if ((1 << ((byte)local_25c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_268);
  }
  local_268 = 0;
  local_260 = 0;
  local_25c = 5;
  local_2e8 = (longlong *)CONCAT44(uRam0000000141dc74a4,_DAT_141dc74a0);
  uStack_2e0 = uRam0000000141dc74a8;
  uStack_2dc = uRam0000000141dc74ac;
  if ((1 << ((byte)local_2c8[1]._4_4_ & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_2c8);
  }
  FUN_140041b80(local_2c8,&local_2e8);
  local_220 = local_2c8;
  local_2e8 = (longlong *)CONCAT44(uRam00000001419ed164,_DAT_1419ed160);
  uStack_2e0 = uRam00000001419ed168;
  uStack_2dc = uRam00000001419ed16c;
  if ((1 << ((byte)local_2b8[1]._4_4_ & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_2b8);
  }
  FUN_140041b80(local_2b8,&local_2e8);
  local_218 = local_2b8;
  puVar7 = (undefined8 *)
           FUN_140e634e0(local_res8,local_res10,&local_268,1,CONCAT44(uVar15,DAT_141a0a0d8),
                         &local_220);
  uStack_2fc = *(undefined4 *)((longlong)puVar7 + 0xc);
  uStack_300 = *(undefined4 *)(puVar7 + 1);
  if ((1 << ((byte)uStack_2fc & 0x1f) & 0x46U) == 0) {
    local_308 = (longlong *)*puVar7;
  }
  else {
    FUN_1400419b0(&local_308,puVar7);
  }
  local_res18 = 0x80;
  local_2cc = 7;
  local_2d8 = (longlong *)CONCAT44(local_2d8._4_4_,7);
  FUN_140042560(&local_308,&local_2d8);
  if ((1 << ((byte)local_2cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_2d8);
  }
  local_2e8 = local_308;
  uStack_2e0 = uStack_300;
  uStack_2dc = uStack_2fc;
  if ((1 << (local_2a8[0xc] & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_2a8);
  }
  FUN_140041b80(local_2a8,&local_2e8);
  if ((1 << ((byte)uStack_2fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_308);
  }
  local_210 = local_2a8;
  gml_Script_anon_1228____struct___136___new_lighting_system_lighting_system
            (local_res8,local_res10,&local_2f8,2,&local_218);
  local_228 = 0x4a;
  if ((1 << ((byte)local_2ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_2f8);
  }
  local_2f8 = 0;
  local_2f0 = 0;
  local_2ec = 5;
  local_2e8 = (longlong *)CONCAT44(uRam00000001419ed134,_DAT_1419ed130);
  uStack_2e0 = uRam00000001419ed138;
  uStack_2dc = uRam00000001419ed13c;
  if ((1 << ((byte)local_2c8[1]._4_4_ & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_2c8);
  }
  FUN_140041b80(local_2c8,&local_2e8);
  local_220 = local_2c8;
  local_2e8 = (longlong *)CONCAT44(uRam00000001419ed144,_DAT_1419ed140);
  uStack_2e0 = uRam00000001419ed148;
  uStack_2dc = uRam00000001419ed14c;
  if ((1 << ((byte)local_2b8[1]._4_4_ & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_2b8);
  }
  FUN_140041b80(local_2b8,&local_2e8);
  local_218 = local_2b8;
  gml_Script_IK_documentation(local_res8,local_res10,&local_2f8,2,&local_220);
  local_228 = 0x4b;
  if ((1 << ((byte)local_2ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_2f8);
  }
  local_2f8 = 0;
  local_2f0 = 0;
  local_2ec = 5;
  uVar5 = (**(code **)(*local_res8 + 8))(local_res8,DAT_1419f5ef8);
  local_2e8 = (longlong *)CONCAT44(uRam00000001419ed154,_DAT_1419ed150);
  uStack_2e0 = uRam00000001419ed158;
  uStack_2dc = uRam00000001419ed15c;
  if ((1 << ((byte)local_2c8[1]._4_4_ & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_2c8);
  }
  FUN_140041b80(local_2c8,&local_2e8);
  local_220 = local_2c8;
  local_2e8 = (longlong *)CONCAT44(uRam00000001419ed124,_DAT_1419ed120);
  uStack_2e0 = uRam00000001419ed128;
  uStack_2dc = uRam00000001419ed12c;
  if ((1 << ((byte)local_2b8[1]._4_4_ & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_2b8);
  }
  FUN_140041b80(local_2b8,&local_2e8);
  local_218 = local_2b8;
  local_2cc = 0;
  local_2d8 = (longlong *)0x3ff0000000000000;
  iVar3 = FUN_140e851f0(uVar5,&local_2d8,DAT_141955260,0);
  if ((1 << ((byte)local_2cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_2d8);
  }
  if (iVar3 == 0) {
    uStack_2fc = 0;
    local_308 = (longlong *)0x4060e00000000000;
    pplVar6 = &local_308;
    uVar14 = 1;
    local_res18 = 1;
  }
  else {
    local_2cc = 0;
    local_2d8 = (longlong *)0x4046800000000000;
    pplVar6 = &local_2d8;
    uVar14 = 2;
    local_res18 = 2;
  }
  uVar1 = local_2cc;
  uVar15 = uStack_2fc;
  local_2e8 = *pplVar6;
  uStack_2e0 = *(undefined4 *)(pplVar6 + 1);
  uStack_2dc = *(undefined4 *)((longlong)pplVar6 + 0xc);
  if ((1 << (local_2a8[0xc] & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_2a8);
  }
  FUN_140041b80(local_2a8,&local_2e8);
  if (((uVar14 & 2) != 0) &&
     (uVar14 = uVar14 & 0xfffffffd, local_res18 = uVar14, (1 << ((byte)uVar1 & 0x1f) & 0x46U) != 0))
  {
    FUN_140041a50(&local_2d8);
  }
  if (((uVar14 & 1) != 0) &&
     (uVar14 = uVar14 & 0xfffffffe, local_res18 = uVar14, (1 << ((byte)uVar15 & 0x1f) & 0x46U) != 0)
     ) {
    FUN_140041a50(&local_308);
  }
  local_210 = local_2a8;
  local_2e8 = (longlong *)CONCAT44(DAT_1419df7b0._4_4_,(undefined4)DAT_1419df7b0);
  uStack_2e0 = DAT_1419df7b8;
  uStack_2dc = DAT_1419df7bc;
  if ((1 << (local_298[0xc] & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_298);
  }
  FUN_140041b80(local_298,&local_2e8);
  local_208 = local_298;
  ppplVar24 = &local_220;
  FUN_14044e5b0(local_res8,local_res10,&local_2f8,4,ppplVar24);
  uVar15 = (undefined4)((ulonglong)ppplVar24 >> 0x20);
  local_228 = 0x4d;
  if ((1 << ((byte)local_2ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_2f8);
  }
  local_2f8 = 0;
  local_2f0 = 0;
  local_2ec = 5;
  uStack_24c = 0xf;
  local_258 = 0x10000020000002b;
  local_2e8 = (longlong *)0x10000020000002b;
  uStack_2e0 = uStack_250;
  uStack_2dc = 0xf;
  if ((1 << ((byte)local_2c8[1]._4_4_ & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_2c8);
  }
  FUN_140041b80(local_2c8,&local_2e8);
  local_220 = local_2c8;
  local_2e8 = (longlong *)CONCAT44(uRam00000001419ed154,_DAT_1419ed150);
  uStack_2e0 = uRam00000001419ed158;
  uStack_2dc = uRam00000001419ed15c;
  if ((1 << ((byte)local_2b8[1]._4_4_ & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_2b8);
  }
  FUN_140041b80(local_2b8,&local_2e8);
  local_218 = local_2b8;
  local_2e8 = (longlong *)CONCAT44(uRam00000001419df7a4,_DAT_1419df7a0);
  uStack_2e0 = uRam00000001419df7a8;
  uStack_2dc = uRam00000001419df7ac;
  if ((1 << (local_2a8[0xc] & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_2a8);
  }
  FUN_140041b80(local_2a8,&local_2e8);
  local_210 = local_2a8;
  ppplVar24 = &local_220;
  uVar21 = CONCAT44(uVar15,DAT_141a0a2e8);
  FUN_140e634e0(local_res8,local_res10,&local_2f8,3,uVar21,ppplVar24);
  local_228 = 0x4f;
  if ((1 << ((byte)local_2ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_2f8);
  }
  local_2f8 = 0;
  local_2f0 = 0;
  local_2ec = 5;
  local_2cc = 6;
  local_2d8 = local_res8;
  uVar17 = (ulonglong)ppplVar24 & 0xffffffffffffff00;
  uVar21 = uVar21 & 0xffffffffffffff00;
  FUN_140e87440(&local_2d8,DAT_1419fe0e8,0x80000000,&local_178,uVar21,uVar17);
  if ((1 << ((byte)local_2cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_2d8);
  }
  local_2cc = 6;
  local_2d8 = local_res8;
  uVar21 = uVar21 & 0xffffffffffffff00;
  FUN_140e87440(&local_2d8,DAT_1419fe158,0x80000000,&local_1c8,uVar21,uVar17 & 0xffffffffffffff00);
  uVar15 = (undefined4)(uVar21 >> 0x20);
  if ((1 << ((byte)local_2cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_2d8);
  }
  local_2e8 = (longlong *)local_178;
  uStack_2e0 = uStack_170;
  uStack_2dc = uStack_16c;
  if ((1 << ((byte)local_2c8[1]._4_4_ & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_2c8);
  }
  FUN_140041b80(local_2c8,&local_2e8);
  local_220 = local_2c8;
  uStack_2fc = uStack_1bc;
  uStack_300 = uStack_1c0;
  if ((1 << ((byte)uStack_1bc & 0x1f) & 0x46U) == 0) {
    local_308 = local_1c8;
  }
  else {
    FUN_1400419b0(&local_308,&local_1c8);
  }
  local_res18 = uVar14 | 0x400;
  local_2cc = 7;
  local_2d8 = (longlong *)CONCAT44(local_2d8._4_4_,2);
  FUN_1400462a0(&local_308,&local_2d8);
  if ((1 << ((byte)local_2cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_2d8);
  }
  local_2e8 = local_308;
  uStack_2e0 = uStack_300;
  uStack_2dc = uStack_2fc;
  if ((1 << ((byte)local_2b8[1]._4_4_ & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_2b8);
  }
  FUN_140041b80(local_2b8,&local_2e8);
  if ((1 << ((byte)uStack_2fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_308);
  }
  local_218 = local_2b8;
  local_2e8 = (longlong *)CONCAT44(uRam0000000141ddab9c,_DAT_141ddab98);
  uStack_2e0 = uRam0000000141ddaba0;
  uStack_2dc = DAT_141ddaba4;
  if ((1 << (local_2a8[0xc] & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_2a8);
  }
  FUN_140041b80(local_2a8,&local_2e8);
  local_210 = local_2a8;
  uStack_24c = 0xf;
  local_258 = 0x10000000000012d;
  local_2e8 = (longlong *)0x10000000000012d;
  uStack_2e0 = uStack_250;
  uStack_2dc = 0xf;
  if ((1 << (local_298[0xc] & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_298);
  }
  FUN_140041b80(local_298,&local_2e8);
  local_208 = local_298;
  ppplVar24 = &local_220;
  uVar21 = CONCAT44(uVar15,DAT_141a0a7c8);
  uVar5 = FUN_140e634e0(local_res8,local_res10,&local_2f8,4,uVar21,ppplVar24);
  iVar3 = FUN_140e63cb0(local_f8,&local_res8,&local_res10,uVar5);
  if (0 < iVar3) {
    do {
      local_228 = 0x51;
      uStack_24c = 0xf;
      local_258 = 0x100000100000061;
      local_2e8 = (longlong *)0x100000100000061;
      uStack_2e0 = uStack_250;
      uStack_2dc = 0xf;
      if ((1 << ((byte)local_17c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_188);
      }
      FUN_140041b80(&local_188,&local_2e8);
      FUN_140e86fa0(local_res8,DAT_141a0a728,0x80000000,&local_188);
      local_228 = 0x52;
      puVar12 = (ulonglong *)(**(code **)(*local_res10 + 8))(local_res10,DAT_1419f5ef8);
      if ((*(uint *)((longlong)puVar12 + 0xc) & 0xffffff) == 0) {
        uVar17 = *puVar12;
      }
      else {
        uVar17 = FUN_140e4b060(puVar12);
      }
      local_168 = uVar17 ^ 0x8000000000000000;
      uStack_15c = 0;
      local_2e8 = (longlong *)(uVar17 ^ 0x8000000000000000);
      uStack_2e0 = uStack_160;
      uStack_2dc = 0;
      if ((1 << ((byte)local_18c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_198);
      }
      FUN_140041b80(&local_198,&local_2e8);
      FUN_140e86fa0(local_res8,DAT_141a0f7f8,0x80000000,&local_198);
      cVar2 = FUN_140e643f0(local_f8,&local_res8,&local_res10);
    } while (cVar2 != '\0');
  }
  FUN_140e63970(local_f8,&local_res8,&local_res10);
  iVar3 = 0x14;
  do {
    iVar3 = iVar3 + -1;
    local_228 = 0x59;
    if ((1 << ((byte)local_2ec & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_2f8);
    }
    local_2f8 = 0;
    local_2f0 = 0;
    local_2ec = 5;
    local_2cc = 6;
    local_2d8 = local_res8;
    uVar17 = (ulonglong)ppplVar24 & 0xffffffffffffff00;
    uVar21 = uVar21 & 0xffffffffffffff00;
    FUN_140e87440(&local_2d8,DAT_1419fe0e8,0x80000000,&local_178,uVar21,uVar17);
    if ((1 << ((byte)local_2cc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_2d8);
    }
    uStack_2fc = 6;
    local_308 = local_res8;
    FUN_140e87440(&local_308,DAT_1419fe158,0x80000000,&local_1c8,uVar21 & 0xffffffffffffff00,
                  uVar17 & 0xffffffffffffff00);
    if ((1 << ((byte)uStack_2fc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_308);
    }
    local_248 = (undefined4)local_178;
    uStack_244 = local_178._4_4_;
    uStack_240 = uStack_170;
    uStack_23c = uStack_16c;
    if ((1 << ((byte)local_2c8[1]._4_4_ & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_2c8);
    }
    FUN_140041b80(local_2c8,&local_248);
    local_220 = local_2c8;
    local_248 = (undefined4)local_1c8;
    uStack_244 = local_1c8._4_4_;
    uStack_240 = uStack_1c0;
    uStack_23c = uStack_1bc;
    if ((1 << ((byte)local_2b8[1]._4_4_ & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_2b8);
    }
    FUN_140041b80(local_2b8,&local_248);
    local_218 = local_2b8;
    puVar7 = (undefined8 *)gml_Script_worldwide_load(local_res8,local_res10,&local_2f8,2,&local_220)
    ;
    if (puVar7 != &local_1a8) {
      local_248 = *(undefined4 *)puVar7;
      uStack_244 = *(undefined4 *)((longlong)puVar7 + 4);
      uStack_240 = *(undefined4 *)(puVar7 + 1);
      uStack_23c = *(undefined4 *)((longlong)puVar7 + 0xc);
      if ((1 << ((byte)local_19c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_1a8);
      }
      FUN_140041b80(&local_1a8,&local_248);
    }
    local_228 = 0x5a;
    if ((1 << ((byte)local_2ec & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_2f8);
    }
    local_2f8 = 0;
    local_2f0 = 0;
    local_2ec = 5;
    FUN_140e87170(&local_1a8,DAT_1419fe0e8,0x80000000,&local_148,local_res8,local_res10);
    plVar25 = local_res8;
    FUN_140e87170(&local_1a8,DAT_1419fe158,0x80000000,&local_158,local_res8,local_res10);
    uVar15 = (undefined4)((ulonglong)plVar25 >> 0x20);
    local_248 = (undefined4)local_148;
    uStack_244 = local_148._4_4_;
    uStack_240 = uStack_140;
    uStack_23c = uStack_13c;
    if ((1 << ((byte)local_2c8[1]._4_4_ & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_2c8);
    }
    FUN_140041b80(local_2c8,&local_248);
    local_220 = local_2c8;
    local_248 = (undefined4)local_158;
    uStack_244 = local_158._4_4_;
    uStack_240 = uStack_150;
    uStack_23c = uStack_14c;
    if ((1 << ((byte)local_2b8[1]._4_4_ & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_2b8);
    }
    FUN_140041b80(local_2b8,&local_248);
    local_218 = local_2b8;
    local_248 = _DAT_141ddab98;
    uStack_244 = uRam0000000141ddab9c;
    uStack_240 = uRam0000000141ddaba0;
    uStack_23c = DAT_141ddaba4;
    if ((1 << (local_2a8[0xc] & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_2a8);
    }
    FUN_140041b80(local_2a8,&local_248);
    local_210 = local_2a8;
    uStack_2dc = 0xf;
    local_2e8 = (longlong *)0x10000000000010b;
    local_248 = 0x10b;
    uStack_244 = 0x1000000;
    uStack_240 = uStack_2e0;
    uStack_23c = 0xf;
    if ((1 << (local_298[0xc] & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_298);
    }
    FUN_140041b80(local_298,&local_248);
    local_208 = local_298;
    ppplVar24 = &local_220;
    uVar21 = CONCAT44(uVar15,DAT_141a0a7c8);
    uVar5 = FUN_140e634e0(local_res8,local_res10,&local_2f8,4,uVar21,ppplVar24);
    iVar4 = FUN_140e63cb0(local_d8,&local_res8,&local_res10,uVar5);
    if (0 < iVar4) {
      do {
        local_228 = 0x5c;
        dVar18 = (double)FUN_140e794b0(0,0);
        if ((1 << ((byte)local_1d4 & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_1e0);
        }
        local_1d4 = 0;
        local_228 = 0x5d;
        local_1e0 = dVar18;
        uVar5 = (**(code **)(*local_res10 + 8))(local_res10,DAT_1419f5ef8);
        local_fc = 0;
        local_108 = 0x3ff0000000000000;
        iVar4 = FUN_140e851f0(uVar5,&local_108,DAT_141955260,0);
        if ((1 << ((byte)local_fc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_108);
        }
        if (iVar4 == 0) {
          uStack_24c = 0;
          local_258 = 0x4062200000000000;
          puVar12 = &local_258;
          uVar14 = uVar14 | 4;
        }
        else {
          uStack_15c = 0;
          local_168 = 0x4041800000000000;
          puVar12 = &local_168;
          uVar14 = uVar14 | 8;
        }
        local_248 = (undefined4)*puVar12;
        uStack_244 = *(undefined4 *)((longlong)puVar12 + 4);
        uStack_240 = (undefined4)puVar12[1];
        uStack_23c = *(undefined4 *)((longlong)puVar12 + 0xc);
        local_res18 = uVar14;
        if ((1 << ((byte)local_1e4 & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_1f0);
        }
        FUN_140041b80(&local_1f0,&local_248);
        if (((uVar14 & 8) != 0) &&
           (uVar14 = uVar14 & 0xfffffff7, local_res18 = uVar14,
           (1 << ((byte)uStack_15c & 0x1f) & 0x46U) != 0)) {
          FUN_140041a50(&local_168);
        }
        if (((uVar14 & 4) != 0) &&
           (uVar14 = uVar14 & 0xfffffffb, (1 << ((byte)uStack_24c & 0x1f) & 0x46U) != 0)) {
          FUN_140041a50(&local_258);
        }
        local_228 = 0x5e;
        uVar15 = FUN_140e794b0(0,0);
        FUN_140162c50(&local_1f0,uVar15);
        local_228 = 0x60;
        pdVar13 = (double *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_141a1f230);
        dVar18 = local_1f0;
        if ((local_1e4 & 0xffffff) != 0) {
          dVar18 = (double)FUN_140e4b060(&local_1f0);
        }
        dVar19 = local_1e0;
        if ((local_1d4 & 0xffffff) != 0) {
          dVar19 = (double)FUN_140e4b060(&local_1e0);
        }
        fVar16 = (float)FUN_140e78f90((float)dVar19,(float)dVar18);
        if ((1 << ((byte)*(undefined4 *)((longlong)pdVar13 + 0xc) & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(pdVar13);
        }
        *(undefined4 *)((longlong)pdVar13 + 0xc) = 0;
        *pdVar13 = (double)fVar16;
        local_228 = 0x61;
        pdVar13 = (double *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_141a1f500);
        dVar18 = local_1f0;
        if ((local_1e4 & 0xffffff) != 0) {
          dVar18 = (double)FUN_140e4b060(&local_1f0);
        }
        dVar19 = local_1e0;
        if ((local_1d4 & 0xffffff) != 0) {
          dVar19 = (double)FUN_140e4b060(&local_1e0);
        }
        fVar16 = (float)FUN_140e79010((float)dVar19,(float)dVar18);
        if ((1 << ((byte)*(undefined4 *)((longlong)pdVar13 + 0xc) & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(pdVar13);
        }
        *(undefined4 *)((longlong)pdVar13 + 0xc) = 0;
        *pdVar13 = (double)fVar16;
        cVar2 = FUN_140e643f0(local_d8,&local_res8,&local_res10);
      } while (cVar2 != '\0');
    }
    FUN_140e63970(local_d8,&local_res8,&local_res10);
    if (local_c8 != 0) {
      FUN_140e4cd60();
    }
  } while (0 < iVar3);
  if (local_e8 != 0) {
    FUN_140e4cd60();
    local_e8 = 0;
  }
  if ((1 << ((byte)local_25c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_268);
  }
  if ((1 << ((byte)local_2ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_2f8);
  }
  if ((1 << ((byte)local_1e4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1f0);
  }
  if ((1 << ((byte)local_1d4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1e0);
  }
  if ((1 << ((byte)uStack_14c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_158);
  }
  if ((1 << ((byte)uStack_13c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_148);
  }
  if ((1 << ((byte)local_19c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1a8);
  }
  if ((1 << ((byte)local_18c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_198);
  }
  if ((1 << ((byte)local_17c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_188);
  }
  if ((1 << ((byte)uStack_1bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1c8);
  }
  if ((1 << ((byte)uStack_16c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_178);
  }
  if ((1 << ((byte)uStack_12c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_138);
  }
  if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_128);
  }
  if ((1 << ((byte)local_10c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_118);
  }
  if ((1 << ((byte)local_1ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1b8);
  }
  _eh_vector_destructor_iterator_(local_2c8,0x10,6,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_238;
  return param_3;
}

