// gml_Object_oBloodSplat_Step_0 @ 0x1406e8790

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void gml_Object_oBloodSplat_Step_0(longlong *param_1,undefined8 param_2)

{
  longlong *plVar1;
  char cVar2;
  int iVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  longlong **pplVar7;
  undefined4 uVar8;
  code *pcVar9;
  ulonglong uVar10;
  undefined4 uVar11;
  ulonglong in_stack_fffffffffffffe00;
  undefined1 **ppuVar12;
  undefined8 local_1f8;
  undefined8 uStack_1f0;
  longlong *local_1e8;
  undefined8 uStack_1e0;
  undefined8 local_1d8;
  undefined4 local_1d0;
  undefined4 local_1cc;
  undefined8 local_1c8;
  char *local_1c0;
  undefined4 local_1b8;
  undefined8 local_1b0;
  undefined4 local_1a8;
  undefined4 local_1a4;
  undefined8 local_1a0;
  undefined4 local_194;
  undefined8 local_190;
  undefined4 local_184;
  undefined8 local_180;
  undefined4 local_174;
  undefined8 local_170;
  undefined4 local_164;
  undefined8 local_160;
  uint local_154;
  undefined1 local_148 [12];
  byte local_13c;
  undefined1 local_138 [12];
  byte local_12c;
  undefined8 local_128;
  byte local_11c;
  undefined1 local_118 [12];
  byte local_10c;
  undefined1 local_108 [12];
  byte local_fc;
  undefined1 local_f8 [12];
  byte local_ec;
  undefined1 local_e8 [12];
  byte local_dc;
  undefined8 local_d8;
  undefined4 local_cc;
  undefined8 local_c8;
  undefined4 local_bc;
  undefined8 local_b8;
  undefined4 local_ac;
  undefined8 local_a8;
  undefined4 local_9c;
  undefined1 *local_98;
  undefined1 *local_90;
  undefined8 *local_88;
  undefined1 *local_80;
  undefined1 *local_78;
  undefined1 *local_70;
  undefined1 *local_68;
  undefined8 *local_60;
  
  local_1c0 = "gml_Object_oBloodSplat_Create_0";
  local_1b8 = 0;
  local_1c8 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_1c8;
  pcVar9 = FUN_140041b30;
  _eh_vector_constructor_iterator_(local_148,0x10,8,FUN_1400424d0,FUN_140041b30);
  local_154 = 0xffffff;
  local_160 = 0;
  local_184 = 0xffffff;
  local_190 = 0;
  local_194 = 0xffffff;
  local_1a0 = 0;
  local_164 = 0xffffff;
  local_170 = 0;
  local_ac = 0xffffff;
  local_b8 = 0;
  local_bc = 0xffffff;
  local_c8 = 0;
  local_174 = 0xffffff;
  local_180 = 0;
  local_1cc = 0xffffff;
  local_1d8 = 0;
  local_1a4 = 0xffffff;
  local_1b0 = 0;
  local_1b8 = 3;
  local_9c = 0;
  local_a8 = 0;
  FUN_140e86fa0(param_1,DAT_141a0a818,0x80000000,&local_a8);
  local_1b8 = 4;
  uStack_1e0._4_4_ = 6;
  uVar10 = (ulonglong)pcVar9 & 0xffffffffffffff00;
  local_1e8 = param_1;
  FUN_140e87440(&local_1e8,DAT_141a043e8,0x80000000,&local_160,uVar10,
                in_stack_fffffffffffffe00 & 0xffffffffffffff00);
  uVar11 = (undefined4)(uVar10 >> 0x20);
  if ((1 << ((byte)uStack_1e0._4_4_ & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1e8);
  }
  if ((local_154 & 0xffffff) == 0) {
    uVar8 = (undefined4)local_160;
  }
  else {
    uVar8 = FUN_140e4b060(&local_160);
  }
  uVar6 = FUN_140e79480(uVar8);
  if ((1 << ((byte)local_184 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_190);
  }
  local_184 = 0;
  local_190 = uVar6;
  FUN_140e86fa0(param_1,DAT_141a0cfc8,0x80000000,&local_190);
  local_1b8 = 6;
  if ((1 << ((byte)local_1cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1d8);
  }
  local_1d8 = 0;
  local_1d0 = 0;
  local_1cc = 5;
  puVar4 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a043d8);
  local_1f8 = (longlong *)CONCAT44(uRam00000001419e7a34,_DAT_1419e7a30);
  uStack_1f0 = CONCAT44(uRam00000001419e7a3c,uRam00000001419e7a38);
  if ((1 << (local_13c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_148);
  }
  FUN_140041b80(local_148,&local_1f8);
  local_98 = local_148;
  local_1f8 = (longlong *)CONCAT44(uRam00000001419e7a14,_DAT_1419e7a10);
  uStack_1f0 = CONCAT44(uRam00000001419e7a1c,uRam00000001419e7a18);
  if ((1 << (local_12c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_138);
  }
  FUN_140041b80(local_138,&local_1f8);
  local_90 = local_138;
  FUN_140e609c0(param_1);
  puVar5 = (undefined8 *)FUN_140e78db0(&local_1d8,2,&local_98);
  if (puVar5 != puVar4) {
    local_1f8 = (longlong *)*puVar5;
    uStack_1f0 = puVar5[1];
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar4 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar4);
    }
    FUN_140041b80(puVar4,&local_1f8);
  }
  FUN_140e60910(1);
  local_1b8 = 8;
  puVar4 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a0a748);
  uVar6 = FUN_140e794b0(0,0x3ff4000000000000);
  if ((1 << ((byte)*(undefined4 *)((longlong)puVar4 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(puVar4);
  }
  *(undefined4 *)((longlong)puVar4 + 0xc) = 0;
  *puVar4 = uVar6;
  local_1b8 = 9;
  uVar6 = (**(code **)(*param_1 + 8))(param_1,DAT_141a043d8);
  pplVar7 = (longlong **)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a0a858);
  FUN_140e609c0(param_1);
  local_1e8 = (longlong *)FUN_140e794b0(0,0x3ff0000000000000);
  uStack_1e0 = (ulonglong)(uint)uStack_1e0;
  FUN_140042560(&local_1e8,uVar6);
  if (&local_1e8 != pplVar7) {
    local_1f8 = local_1e8;
    uStack_1f0 = uStack_1e0;
    if ((1 << ((byte)*(undefined4 *)((longlong)pplVar7 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(pplVar7);
    }
    FUN_140041b80(pplVar7,&local_1f8);
  }
  if ((1 << ((byte)(uStack_1e0 >> 0x20) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1e8);
  }
  FUN_140e60910(1);
  local_1b8 = 0xb;
  if ((1 << ((byte)local_194 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1a0);
  }
  local_194 = 0;
  local_1a0 = 0x3fe0000000000000;
  FUN_140e86fa0(param_1,DAT_141a0f7f8,0x80000000,&local_1a0);
  local_1b8 = 0xc;
  uStack_1e0 = uStack_1e0 & 0xffffffff;
  local_1e8 = (longlong *)0x3fe0000000000000;
  FUN_140042560(&local_1e8,uVar6);
  local_1f8 = local_1e8;
  uStack_1f0 = uStack_1e0;
  if ((1 << ((byte)local_164 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_170);
  }
  FUN_140041b80(&local_170,&local_1f8);
  if ((1 << ((byte)(uStack_1e0 >> 0x20) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1e8);
  }
  FUN_140e86fa0(param_1,DAT_141a0f938,0x80000000,&local_170);
  local_1b8 = 0xe;
  puVar4 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a0a848);
  if ((1 << ((byte)*(undefined4 *)((longlong)puVar4 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(puVar4);
  }
  *(undefined4 *)((longlong)puVar4 + 0xc) = 0;
  *puVar4 = 0;
  local_1b8 = 0xf;
  if ((1 << ((byte)local_1cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1d8);
  }
  local_1d8 = 0;
  local_1d0 = 0;
  local_1cc = 5;
  pplVar7 = (longlong **)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a04168);
  local_1f8 = (longlong *)CONCAT44(uRam0000000141dc68e4,_DAT_141dc68e0);
  uStack_1f0 = CONCAT44(uRam0000000141dc68ec,uRam0000000141dc68e8);
  if ((1 << (local_13c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_148);
  }
  FUN_140041b80(local_148,&local_1f8);
  local_98 = local_148;
  FUN_140e609c0(param_1);
  plVar1 = (longlong *)FUN_140e794b0(0,0x4008000000000000);
  uVar6 = CONCAT44(uVar11,DAT_141a0a0d8);
  puVar4 = (undefined8 *)FUN_140e634e0(param_1,param_2,&local_1d8,1,uVar6,&local_98);
  uVar11 = (undefined4)((ulonglong)uVar6 >> 0x20);
  uStack_1e0 = puVar4[1];
  if ((1 << ((byte)*(undefined4 *)((longlong)puVar4 + 0xc) & 0x1f) & 0x46U) == 0) {
    local_1e8 = (longlong *)*puVar4;
  }
  else {
    FUN_1400419b0(&local_1e8,puVar4);
  }
  uStack_1f0 = uStack_1f0 & 0xffffffff;
  local_1f8 = plVar1;
  FUN_140042560(&local_1e8,&local_1f8);
  if ((1 << ((byte)(uStack_1f0 >> 0x20) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1f8);
  }
  if (&local_1e8 != pplVar7) {
    local_1f8 = local_1e8;
    uStack_1f0 = uStack_1e0;
    if ((1 << ((byte)*(undefined4 *)((longlong)pplVar7 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(pplVar7);
    }
    FUN_140041b80(pplVar7,&local_1f8);
  }
  if ((1 << ((byte)(uStack_1e0 >> 0x20) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1e8);
  }
  FUN_140e60910(1);
  local_1b8 = 0x11;
  puVar4 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a01b48);
  if ((1 << ((byte)*(undefined4 *)((longlong)puVar4 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(puVar4);
  }
  *(undefined4 *)((longlong)puVar4 + 0xc) = 0;
  *puVar4 = 0;
  local_1b8 = 0x12;
  if ((1 << ((byte)local_1cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1d8);
  }
  local_1d8 = 0;
  local_1d0 = 0;
  local_1cc = 5;
  pplVar7 = (longlong **)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a043c8);
  local_1f8 = (longlong *)CONCAT44(uRam0000000141dc68e4,_DAT_141dc68e0);
  uStack_1f0 = CONCAT44(uRam0000000141dc68ec,uRam0000000141dc68e8);
  if ((1 << (local_13c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_148);
  }
  FUN_140041b80(local_148,&local_1f8);
  local_98 = local_148;
  FUN_140e609c0(param_1);
  plVar1 = (longlong *)FUN_140e794b0(0,0x4000000000000000);
  ppuVar12 = &local_98;
  uVar10 = CONCAT44(uVar11,DAT_141a0a0d8);
  puVar4 = (undefined8 *)FUN_140e634e0(param_1,param_2,&local_1d8,1,uVar10,ppuVar12);
  uStack_1e0 = puVar4[1];
  if ((1 << ((byte)*(undefined4 *)((longlong)puVar4 + 0xc) & 0x1f) & 0x46U) == 0) {
    local_1e8 = (longlong *)*puVar4;
  }
  else {
    FUN_1400419b0(&local_1e8,puVar4);
  }
  uStack_1f0 = uStack_1f0 & 0xffffffff;
  local_1f8 = plVar1;
  FUN_140042560(&local_1e8,&local_1f8);
  if ((1 << ((byte)(uStack_1f0 >> 0x20) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1f8);
  }
  if (&local_1e8 != pplVar7) {
    local_1f8 = local_1e8;
    uStack_1f0 = uStack_1e0;
    if ((1 << ((byte)*(undefined4 *)((longlong)pplVar7 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(pplVar7);
    }
    FUN_140041b80(pplVar7,&local_1f8);
  }
  if ((1 << ((byte)(uStack_1e0 >> 0x20) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1e8);
  }
  FUN_140e60910(1);
  local_1b8 = 0x14;
  puVar4 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419fe308);
  uStack_1f0._4_4_ = 0xd;
  local_1f8 = (longlong *)0x0;
  if (&local_1f8 != puVar4) {
    local_1e8 = (longlong *)0x0;
    uStack_1e0 = CONCAT44(0xd,(undefined4)uStack_1f0);
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar4 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar4);
    }
    FUN_140041b80(puVar4,&local_1e8);
  }
  local_1b8 = 0x17;
  puVar4 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419fd588);
  FUN_140e609c0(param_1);
  FUN_140e645a0(&local_1f8,gml_Object_oBloodSplat_PreCreate_0,param_1);
  if (&local_1f8 != puVar4) {
    local_1e8 = local_1f8;
    uStack_1e0 = CONCAT44(uStack_1f0._4_4_,(undefined4)uStack_1f0);
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar4 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar4);
    }
    FUN_140041b80(puVar4,&local_1e8);
  }
  if ((1 << ((byte)uStack_1f0._4_4_ & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1f8);
  }
  FUN_140e60910(1);
  local_1b8 = 0x1e;
  FUN_140e85f80(param_1,DAT_1419f6b08,0x80000000,&local_b8);
  uStack_1f0._4_4_ = 0xf;
  local_1f8 = (longlong *)0x100000300000020;
  iVar3 = FUN_140e851f0(&local_b8,&local_1f8,DAT_141955260,0);
  if ((1 << ((byte)uStack_1f0._4_4_ & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1f8);
  }
  if (iVar3 == 0) {
    (**(code **)(*param_1 + 8))(param_1,DAT_141a043d8);
    uStack_1f0._4_4_ = 6;
    uVar10 = uVar10 & 0xffffffffffffff00;
    local_1f8 = param_1;
    FUN_140e87440(&local_1f8,DAT_1419f61d8,0x80000000,&local_c8,uVar10,
                  (ulonglong)ppuVar12 & 0xffffffffffffff00);
    if ((1 << ((byte)uStack_1f0._4_4_ & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1f8);
    }
    cVar2 = FUN_140e491e0(&local_c8);
    if (cVar2 != '\0') {
      local_1b8 = 0x20;
      uStack_1f0 = CONCAT44(0xd,(undefined4)uStack_1f0);
      local_1f8 = (longlong *)0x0;
      local_1e8 = (longlong *)0x0;
      uStack_1e0 = uStack_1f0;
      if ((1 << ((byte)local_174 & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_180);
      }
      FUN_140041b80(&local_180,&local_1e8);
      FUN_140e86fa0(param_1,DAT_1419f61d8,0x80000000,&local_180);
      local_1b8 = 0x21;
      FUN_140edd0e0(param_1,param_2,0,0);
      goto LAB_1406e951b;
    }
  }
  uVar11 = (undefined4)(uVar10 >> 0x20);
  local_1b8 = 0x25;
  if ((1 << ((byte)local_1cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1d8);
  }
  local_1d8 = 0;
  local_1d0 = 0;
  local_1cc = 5;
  if ((1 << ((byte)local_1a4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1b0);
  }
  local_1b0 = 0;
  local_1a8 = 0;
  local_1a4 = 5;
  uStack_1f0 = CONCAT44(0xf,(undefined4)uStack_1f0);
  local_1f8 = (longlong *)0x10000020000001e;
  local_1e8 = (longlong *)0x10000020000001e;
  uStack_1e0 = CONCAT44(0xf,(undefined4)uStack_1f0);
  if ((1 << (local_13c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_148);
  }
  FUN_140041b80(local_148,&local_1e8);
  local_98 = local_148;
  uStack_1f0 = CONCAT44(0xf,(undefined4)uStack_1f0);
  local_1f8 = (longlong *)0x100000200000025;
  local_1e8 = (longlong *)0x100000200000025;
  uStack_1e0 = CONCAT44(0xf,(undefined4)uStack_1f0);
  if ((1 << (local_12c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_138);
  }
  FUN_140041b80(local_138,&local_1e8);
  local_90 = local_138;
  puVar4 = (undefined8 *)FUN_140e78db0(&local_1b0,2,&local_98);
  if (puVar4 != &local_128) {
    local_1f8 = (longlong *)*puVar4;
    uStack_1f0 = puVar4[1];
    if ((1 << (local_11c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_128);
    }
    FUN_140041b80(&local_128,&local_1f8);
  }
  local_1f8 = (longlong *)CONCAT44(uRam00000001419e7a24,_DAT_1419e7a20);
  uStack_1f0 = CONCAT44(uRam00000001419e7a2c,uRam00000001419e7a28);
  local_88 = &local_128;
  if ((1 << (local_10c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_118);
  }
  FUN_140041b80(local_118,&local_1f8);
  local_80 = local_118;
  local_1f8 = (longlong *)CONCAT44(uRam00000001419df7a4,_DAT_1419df7a0);
  uStack_1f0 = CONCAT44(uRam00000001419df7ac,uRam00000001419df7a8);
  if ((1 << (local_fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_108);
  }
  FUN_140041b80(local_108,&local_1f8);
  local_78 = local_108;
  local_1f8 = (longlong *)CONCAT44(uRam00000001419e7a04,_DAT_1419e7a00);
  uStack_1f0 = CONCAT44(uRam00000001419e7a0c,uRam00000001419e7a08);
  if ((1 << (local_ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_f8);
  }
  FUN_140041b80(local_f8,&local_1f8);
  local_70 = local_f8;
  local_1f8 = (longlong *)CONCAT44(DAT_1419df7b0._4_4_,(undefined4)DAT_1419df7b0);
  uStack_1f0 = CONCAT44(DAT_1419df7bc,DAT_1419df7b8);
  if ((1 << (local_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_e8);
  }
  FUN_140041b80(local_e8,&local_1f8);
  local_68 = local_e8;
  local_d8 = FUN_140e794b0(0x33333333,0x3ff4000000000000);
  if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d8);
  }
  local_cc = 0;
  local_60 = &local_d8;
  FUN_140e634e0(param_1,param_2,&local_1d8,6,CONCAT44(uVar11,DAT_141a0a2e8),&local_88);
LAB_1406e951b:
  if ((1 << ((byte)local_1a4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1b0);
  }
  if ((1 << ((byte)local_1cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1d8);
  }
  if ((1 << ((byte)local_174 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_180);
  }
  if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  if ((1 << ((byte)local_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b8);
  }
  if ((1 << ((byte)local_164 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_170);
  }
  if ((1 << ((byte)local_194 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1a0);
  }
  if ((1 << ((byte)local_184 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_190);
  }
  if ((1 << ((byte)local_154 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_160);
  }
  if ((1 << ((byte)local_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a8);
  }
  _eh_vector_destructor_iterator_(local_148,0x10,8,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_1c8;
  return;
}

