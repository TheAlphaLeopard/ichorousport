// gml_Script_anon_11677_anon_9910_gml_Object_oRogueLevelManager_Create_0 @ 0x140cc47d0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
gml_Script_anon_11677_anon_9910_gml_Object_oRogueLevelManager_Create_0
          (longlong *param_1,longlong *param_2,undefined8 *param_3,undefined4 param_4,
          undefined8 param_5)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  uint uVar8;
  ulonglong uVar9;
  undefined8 *puVar10;
  undefined4 uVar11;
  longlong *local_res8;
  longlong *local_res10;
  undefined8 *local_res18;
  uint local_res20;
  undefined8 **ppuVar12;
  undefined4 uVar13;
  undefined8 local_2a8;
  undefined4 uStack_2a0;
  uint uStack_29c;
  undefined4 local_298;
  undefined4 uStack_294;
  undefined4 uStack_290;
  undefined4 uStack_28c;
  undefined8 local_288;
  undefined4 local_280;
  undefined4 local_27c;
  undefined4 local_278;
  undefined4 uStack_274;
  undefined4 uStack_270;
  undefined4 uStack_26c;
  undefined8 local_268;
  char *local_260;
  undefined4 local_258;
  undefined8 local_250;
  undefined4 local_248;
  undefined4 local_244;
  undefined8 local_240;
  undefined4 local_234;
  undefined8 local_230;
  undefined4 local_224;
  undefined8 local_220;
  undefined4 local_214;
  undefined8 local_210;
  undefined4 local_204;
  undefined8 local_200;
  undefined4 local_1f4;
  undefined8 local_1f0;
  undefined4 local_1e4;
  undefined8 local_1e0;
  undefined4 local_1d4;
  uint local_1d0 [2];
  undefined8 *local_1c8;
  undefined8 local_1b8;
  byte local_1ac;
  undefined8 local_1a8;
  byte local_19c;
  undefined8 local_198;
  byte local_18c;
  undefined4 local_188 [3];
  byte local_17c;
  undefined8 *local_118;
  undefined8 *local_110;
  undefined8 *local_108;
  longlong **local_100;
  undefined8 *local_f8;
  undefined8 *local_f0;
  undefined8 *local_e8;
  undefined8 **local_e0;
  longlong **local_d8;
  undefined8 local_d0;
  undefined4 local_c4;
  undefined8 *local_b8;
  undefined8 *local_b0;
  undefined8 *local_a8;
  undefined4 *local_a0 [12];
  
  local_res20 = 0;
  local_260 = "gml_Script_anon@8364@gml_Object_oRogueLevelManager_Create_0";
  local_268 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_268;
  local_258 = 0x145;
  local_res8 = param_1;
  local_res10 = param_2;
  local_res18 = param_3;
  FUN_140041df0(local_1d0,param_4,5,param_5);
  _eh_vector_constructor_iterator_(&local_1b8,0x10,10,FUN_1400424d0,FUN_140041b30);
  local_224 = 0xffffff;
  local_230 = 0;
  local_234 = 0xffffff;
  local_240 = 0;
  local_1d4 = 0xffffff;
  local_1e0 = 0;
  local_1e4 = 0xffffff;
  local_1f0 = 0;
  puVar2 = (undefined8 *)(**(code **)(*DAT_141a729d8 + 8))(DAT_141a729d8,DAT_1419f9de8);
  local_27c = 0;
  local_288 = 0;
  local_244 = 0;
  local_250 = 0;
  local_c4 = 0;
  local_d0 = 0;
  local_1f4 = 0;
  local_200 = 0;
  local_204 = 0;
  local_210 = 0;
  local_214 = 0;
  local_220 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  if ((*(int *)(*(longlong *)ThreadLocalStoragePointer + 0x18) < DAT_141de31e0) &&
     (_Init_thread_header(&DAT_141de31e0), DAT_141de31e0 == -1)) {
    DAT_141de31e8 = FUN_140e63aa0(DAT_1419f9988);
    _Init_thread_footer(&DAT_141de31e0);
  }
  local_258 = 0x145;
  puVar10 = &DAT_1419df7b0;
  uVar9 = (ulonglong)local_1d0[0];
  if ((int)local_1d0[0] < 5) {
    puVar3 = &DAT_1419df7b0;
  }
  else {
    puVar3 = (undefined8 *)local_1c8[4];
  }
  iVar1 = FUN_140e851f0(puVar3,&DAT_1419df7b0,DAT_141955260,0);
  if (iVar1 == 0) {
    local_258 = 0x145;
    if ((int)local_1d0[0] < 5) {
      puVar3 = &DAT_1419df7b0;
    }
    else {
      puVar3 = (undefined8 *)local_1c8[4];
    }
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar3 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar3);
    }
    *(undefined4 *)((longlong)puVar3 + 0xc) = 0;
    *puVar3 = &DAT_bff0000000000000;
  }
  FUN_140e643a0(local_res8,DAT_141de31e8);
  local_258 = 0x147;
  if ((int)local_1d0[0] < 1) {
    puVar3 = &DAT_1419df7b0;
LAB_140cc49f4:
    local_278 = *(undefined4 *)puVar3;
    uStack_274 = *(undefined4 *)((longlong)puVar3 + 4);
    uStack_270 = *(undefined4 *)(puVar3 + 1);
    uStack_26c = *(undefined4 *)((longlong)puVar3 + 0xc);
    if ((1 << ((byte)local_224 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_230);
    }
    FUN_140041b80(&local_230,&local_278);
  }
  else {
    puVar3 = (undefined8 *)*local_1c8;
    if (puVar3 != &local_230) goto LAB_140cc49f4;
  }
  FUN_140e86fa0(local_res8,DAT_1419fe0e8,0x80000000,&local_230);
  local_258 = 0x148;
  if ((int)local_1d0[0] < 2) {
    puVar3 = &DAT_1419df7b0;
LAB_140cc4a5f:
    local_278 = *(undefined4 *)puVar3;
    uStack_274 = *(undefined4 *)((longlong)puVar3 + 4);
    uStack_270 = *(undefined4 *)(puVar3 + 1);
    uStack_26c = *(undefined4 *)((longlong)puVar3 + 0xc);
    if ((1 << ((byte)local_234 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_240);
    }
    FUN_140041b80(&local_240,&local_278);
  }
  else {
    puVar3 = (undefined8 *)local_1c8[1];
    if (puVar3 != &local_240) goto LAB_140cc4a5f;
  }
  FUN_140e86fa0(local_res8,DAT_1419fe158,0x80000000,&local_240);
  local_258 = 0x14a;
  puVar3 = (undefined8 *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_1419fd1b8);
  FUN_140e609c0(local_res8);
  if ((int)local_1d0[0] < 3) {
    puVar4 = &DAT_1419df7b0;
  }
  else {
    puVar4 = (undefined8 *)local_1c8[2];
  }
  if (puVar4 != puVar3) {
    local_278 = *(undefined4 *)puVar4;
    uStack_274 = *(undefined4 *)((longlong)puVar4 + 4);
    uStack_270 = *(undefined4 *)(puVar4 + 1);
    uStack_26c = *(undefined4 *)((longlong)puVar4 + 0xc);
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar3 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar3);
    }
    FUN_140041b80(puVar3,&local_278);
  }
  FUN_140e60910(1);
  local_258 = 0x14b;
  puVar3 = (undefined8 *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_1419fd178);
  FUN_140e609c0(local_res8);
  if ((int)local_1d0[0] < 4) {
    puVar4 = &DAT_1419df7b0;
  }
  else {
    puVar4 = (undefined8 *)local_1c8[3];
  }
  if (puVar4 != puVar3) {
    local_278 = *(undefined4 *)puVar4;
    uStack_274 = *(undefined4 *)((longlong)puVar4 + 4);
    uStack_270 = *(undefined4 *)(puVar4 + 1);
    uStack_26c = *(undefined4 *)((longlong)puVar4 + 0xc);
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar3 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar3);
    }
    FUN_140041b80(puVar3,&local_278);
  }
  FUN_140e60910(1);
  local_258 = 0x14d;
  if ((1 << ((byte)local_27c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_288);
  }
  local_288 = 0;
  local_280 = 0;
  local_27c = 5;
  puVar3 = (undefined8 *)(**(code **)(*local_res10 + 8))(local_res10,DAT_1419f9be8);
  puVar4 = (undefined8 *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_1419f6348);
  local_278 = _DAT_1419ed5a0;
  uStack_274 = uRam00000001419ed5a4;
  uStack_270 = uRam00000001419ed5a8;
  uStack_26c = uRam00000001419ed5ac;
  if ((1 << (local_1ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1b8);
  }
  FUN_140041b80(&local_1b8,&local_278);
  local_b8 = &local_1b8;
  ppuVar12 = &local_b8;
  uVar5 = gml_Script_choose_weighted(local_res8,local_res10,&local_288,1,ppuVar12);
  uVar13 = (undefined4)((ulonglong)ppuVar12 >> 0x20);
  uStack_29c = *(uint *)((longlong)puVar3 + 0xc);
  uStack_2a0 = *(undefined4 *)(puVar3 + 1);
  if ((1 << ((byte)uStack_29c & 0x1f) & 0x46U) == 0) {
    local_2a8 = (undefined1 *)*puVar3;
  }
  else {
    FUN_1400419b0(&local_2a8,puVar3);
  }
  local_res20 = 4;
  FUN_1400460e0(&local_2a8,uVar5);
  if ((uStack_29c & 0xffffff) == 0) {
    uVar11 = SUB84(local_2a8,0);
  }
  else {
    uVar11 = FUN_140e4b060(&local_2a8);
  }
  uVar5 = FUN_140e794b0(0,uVar11);
  if ((1 << ((byte)*(undefined4 *)((longlong)puVar4 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(puVar4);
  }
  *(undefined4 *)((longlong)puVar4 + 0xc) = 0;
  *puVar4 = uVar5;
  local_res20 = 0;
  if ((1 << ((byte)uStack_29c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_2a8);
  }
  local_258 = 0x14e;
  puVar3 = (undefined8 *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_141a1eed0);
  if ((int)local_1d0[0] < 5) {
    puVar4 = &DAT_1419df7b0;
  }
  else {
    puVar4 = (undefined8 *)local_1c8[4];
  }
  uStack_29c = 0;
  local_2a8 = &DAT_bff0000000000000;
  iVar1 = FUN_140e851f0(puVar4,&local_2a8,DAT_141955260,0);
  if ((1 << ((byte)uStack_29c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_2a8);
  }
  if (iVar1 == 0) {
    local_118 = &local_200;
    local_110 = &local_210;
    local_108 = &local_220;
    local_100 = &local_res8;
    local_f8 = &local_1e0;
    local_f0 = &local_1f0;
    local_e8 = &local_1b8;
    local_e0 = &local_b8;
    local_d8 = &local_res10;
    puVar4 = (undefined8 *)FUN_140cc5590(&local_118,&local_278);
    uVar8 = 1;
  }
  else {
    if ((int)local_1d0[0] < 5) {
      puVar4 = &DAT_1419df7b0;
    }
    else {
      puVar4 = (undefined8 *)local_1c8[4];
    }
    uStack_29c = *(undefined4 *)((longlong)puVar4 + 0xc);
    uStack_2a0 = *(undefined4 *)(puVar4 + 1);
    if ((1 << ((byte)uStack_29c & 0x1f) & 0x46U) == 0) {
      local_2a8 = (undefined1 *)*puVar4;
    }
    else {
      FUN_1400419b0(&local_2a8);
    }
    puVar4 = &local_2a8;
    uVar8 = 2;
  }
  local_res20 = uVar8;
  FUN_140e609c0(local_res8);
  if (puVar4 != puVar3) {
    local_298 = *(undefined4 *)puVar4;
    uStack_294 = *(undefined4 *)((longlong)puVar4 + 4);
    uStack_290 = *(undefined4 *)(puVar4 + 1);
    uStack_28c = *(undefined4 *)((longlong)puVar4 + 0xc);
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar3 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar3);
    }
    FUN_140041b80(puVar3,&local_298);
  }
  if (((uVar8 & 2) != 0) &&
     (uVar8 = uVar8 & 0xfffffffd, local_res20 = uVar8, (1 << ((byte)uStack_29c & 0x1f) & 0x46U) != 0
     )) {
    FUN_140041a50(&local_2a8);
  }
  if (((uVar8 & 1) != 0) && ((1 << ((byte)uStack_26c & 0x1f) & 0x46U) != 0)) {
    FUN_140041a50(&local_278);
  }
  FUN_140e60910(1);
  local_258 = 0x150;
  puVar3 = (undefined8 *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_141a09408);
  uStack_29c = 0xd;
  local_2a8 = (undefined1 *)0x0;
  if (&local_2a8 != puVar3) {
    local_298 = 0;
    uStack_294 = 0;
    uStack_290 = uStack_2a0;
    uStack_28c = 0xd;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar3 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar3);
    }
    FUN_140041b80(puVar3,&local_298);
  }
  local_258 = 0x151;
  puVar3 = (undefined8 *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_1419f9ae8);
  if ((1 << ((byte)*(undefined4 *)((longlong)puVar3 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(puVar3);
  }
  *(undefined4 *)((longlong)puVar3 + 0xc) = 0;
  *puVar3 = 0x4039000000000000;
  local_258 = 0x153;
  puVar3 = (undefined8 *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_1419f9ff8);
  if ((1 << ((byte)*(undefined4 *)((longlong)puVar3 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(puVar3);
  }
  *(undefined4 *)((longlong)puVar3 + 0xc) = 0;
  *puVar3 = &DAT_bff0000000000000;
  local_258 = 0x154;
  puVar3 = (undefined8 *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_1419f9e48);
  uStack_29c = 0xd;
  local_2a8 = (undefined1 *)0x0;
  if (&local_2a8 != puVar3) {
    local_298 = 0;
    uStack_294 = 0;
    uStack_290 = uStack_2a0;
    uStack_28c = 0xd;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar3 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar3);
    }
    FUN_140041b80(puVar3,&local_298);
  }
  local_258 = 0x156;
  if ((1 << ((byte)local_27c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_288);
  }
  local_288 = 0;
  local_280 = 0;
  local_27c = 5;
  if ((1 << ((byte)local_244 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_250);
  }
  local_250 = 0;
  local_248 = 0;
  local_244 = 5;
  puVar6 = (undefined4 *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_1419f9d18);
  FUN_140e609c0(DAT_141a729d8);
  FUN_140e645a0(&local_2a8,gml_Script_anon_8743_anon_8364_gml_Object_oRogueLevelManager_Create_0,0);
  if (&local_2a8 != puVar2) {
    local_298 = (undefined4)local_2a8;
    uStack_294 = local_2a8._4_4_;
    uStack_290 = uStack_2a0;
    uStack_28c = uStack_29c;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar2 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar2);
    }
    FUN_140041b80(puVar2,&local_298);
  }
  FUN_140e60910(1);
  if (puVar2 != &local_1b8) {
    local_298 = *(undefined4 *)puVar2;
    uStack_294 = *(undefined4 *)((longlong)puVar2 + 4);
    uStack_290 = *(undefined4 *)(puVar2 + 1);
    uStack_28c = *(undefined4 *)((longlong)puVar2 + 0xc);
    if ((1 << (local_1ac & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1b8);
    }
    FUN_140041b80(&local_1b8,&local_298);
  }
  if ((1 << ((byte)uStack_29c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_2a8);
  }
  local_b8 = &local_1b8;
  if ((int)local_1d0[0] < 1) {
    puVar2 = &DAT_1419df7b0;
  }
  else {
    puVar2 = (undefined8 *)*local_1c8;
    if (puVar2 == &local_1a8) goto LAB_140cc51f7;
  }
  local_298 = *(undefined4 *)puVar2;
  uStack_294 = *(undefined4 *)((longlong)puVar2 + 4);
  uStack_290 = *(undefined4 *)(puVar2 + 1);
  uStack_28c = *(undefined4 *)((longlong)puVar2 + 0xc);
  if ((1 << (local_19c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1a8);
  }
  FUN_140041b80(&local_1a8,&local_298);
LAB_140cc51f7:
  local_b0 = &local_1a8;
  if (((int)local_1d0[0] < 2) || (puVar10 = (undefined8 *)local_1c8[1], puVar10 != &local_198)) {
    local_298 = *(undefined4 *)puVar10;
    uStack_294 = *(undefined4 *)((longlong)puVar10 + 4);
    uStack_290 = *(undefined4 *)(puVar10 + 1);
    uStack_28c = *(undefined4 *)((longlong)puVar10 + 0xc);
    if ((1 << (local_18c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_198);
    }
    FUN_140041b80(&local_198,&local_298);
  }
  local_a8 = &local_198;
  uVar5 = CONCAT44(uVar13,DAT_1419fd6d8);
  puVar7 = (undefined4 *)FUN_140e634e0(local_res8,local_res10,&local_250,3,uVar5,&local_b8);
  uVar13 = (undefined4)((ulonglong)uVar5 >> 0x20);
  if (puVar7 != local_188) {
    local_298 = *puVar7;
    uStack_294 = puVar7[1];
    uStack_290 = puVar7[2];
    uStack_28c = puVar7[3];
    if ((1 << (local_17c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_188);
    }
    FUN_140041b80(local_188,&local_298);
  }
  local_a0[0] = local_188;
  FUN_140e609c0(local_res8);
  puVar7 = (undefined4 *)
           FUN_140e634e0(local_res8,local_res10,&local_288,1,CONCAT44(uVar13,DAT_1419fdca8),local_a0
                        );
  if (puVar7 != puVar6) {
    local_298 = *puVar7;
    uStack_294 = puVar7[1];
    uStack_290 = puVar7[2];
    uStack_28c = puVar7[3];
    if ((1 << ((byte)puVar6[3] & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar6);
    }
    FUN_140041b80(puVar6,&local_298);
  }
  FUN_140e60910(1);
  local_258 = 0x158;
  puVar2 = (undefined8 *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_141a0a968);
  FUN_140e609c0(local_res8);
  FUN_140e645a0(&local_2a8,
                gml_Script____struct___737_anon_9910_gml_Object_oRogueLevelManager_Create_0,
                local_res8);
  if (&local_2a8 != puVar2) {
    local_298 = (undefined4)local_2a8;
    uStack_294 = local_2a8._4_4_;
    uStack_290 = uStack_2a0;
    uStack_28c = uStack_29c;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar2 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar2);
    }
    FUN_140041b80(puVar2,&local_298);
  }
  if ((1 << ((byte)uStack_29c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_2a8);
  }
  FUN_140e60910(1);
  if ((1 << ((byte)local_214 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_220);
  }
  if ((1 << ((byte)local_204 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_210);
  }
  if ((1 << ((byte)local_1f4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_200);
  }
  if ((1 << ((byte)local_244 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_250);
  }
  if ((1 << ((byte)local_27c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_288);
  }
  if ((1 << ((byte)local_1e4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1f0);
  }
  if ((1 << ((byte)local_1d4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1e0);
  }
  if ((1 << ((byte)local_234 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_240);
  }
  if ((1 << ((byte)local_224 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_230);
  }
  _eh_vector_destructor_iterator_(&local_1b8,0x10,10,FUN_140041b30);
  if (0 < (int)local_1d0[0]) {
    puVar2 = local_1c8;
    do {
      puVar10 = (undefined8 *)*puVar2;
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar10 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar10);
      }
      *puVar10 = 0;
      *(undefined4 *)(puVar10 + 1) = 0;
      *(undefined4 *)((longlong)puVar10 + 0xc) = 5;
      puVar2 = puVar2 + 1;
      uVar9 = uVar9 - 1;
    } while (uVar9 != 0);
  }
  FUN_140e4cd60(local_1c8);
  DAT_141dc7a50 = (undefined8 *)local_268;
  return local_res18;
}

