// gml_Object_objExample_Step_0 @ 0x1406918d0

/* WARNING: Removing unreachable block (ram,0x00014069342a) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void gml_Object_objExample_Step_0(longlong *param_1,undefined8 param_2)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  ulonglong *puVar4;
  undefined8 *puVar5;
  longlong lVar6;
  uint *puVar7;
  uint *puVar8;
  undefined *puVar9;
  undefined8 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  code *pcVar13;
  undefined4 uVar15;
  undefined8 uVar14;
  ulonglong in_stack_fffffffffffffdd0;
  ulonglong uVar16;
  undefined *puVar17;
  uint **ppuVar18;
  uint local_1f8;
  uint uStack_1f4;
  uint uStack_1f0;
  uint uStack_1ec;
  ulonglong local_1e8;
  uint uStack_1e0;
  undefined4 uStack_1dc;
  undefined8 local_1d8;
  undefined4 local_1d0;
  undefined4 local_1cc;
  undefined8 local_1c8;
  char *local_1c0;
  undefined4 local_1b8;
  undefined8 local_1b0;
  undefined4 local_1a8;
  undefined4 local_1a4;
  double local_1a0;
  uint local_194;
  undefined8 local_190;
  undefined4 local_188;
  undefined4 local_184;
  uint local_178 [3];
  byte local_16c;
  undefined8 local_168;
  undefined4 local_15c;
  undefined8 local_158;
  undefined4 local_14c;
  undefined8 local_148;
  undefined4 local_13c;
  undefined8 local_138;
  undefined4 local_12c;
  uint *local_128;
  undefined8 *local_120;
  undefined8 *local_118;
  undefined8 *local_110;
  undefined8 *local_108;
  undefined8 local_f8;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined8 local_e8;
  undefined4 local_dc;
  undefined8 local_d8;
  undefined4 local_cc;
  undefined8 local_c8;
  undefined4 local_bc;
  undefined8 local_b8;
  undefined4 local_ac;
  undefined8 local_a8;
  undefined4 local_9c;
  undefined8 local_98;
  undefined4 local_8c;
  
  local_1c0 = "gml_Object_objExample_Create_0";
  local_1b8 = 0;
  local_1c8 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_1c8;
  if (DAT_141dc7a60 == 0) {
    DAT_141dc7a60 = FUN_140e63aa0(DAT_141a57070);
  }
  pcVar13 = FUN_140041b30;
  _eh_vector_constructor_iterator_(local_178,0x10,5,FUN_1400424d0,FUN_140041b30);
  local_9c = 0xffffff;
  local_a8 = 0;
  local_ac = 0xffffff;
  local_b8 = 0;
  local_bc = 0xffffff;
  local_c8 = 0;
  local_194 = 0xffffff;
  local_1a0 = 0.0;
  local_cc = 0xffffff;
  local_d8 = 0;
  local_dc = 0xffffff;
  local_e8 = 0;
  uStack_ec = 0xffffff;
  local_f8 = 0;
  local_1cc = 0xffffff;
  local_1d8 = 0;
  local_8c = 0xffffff;
  local_98 = 0;
  local_184 = 0xffffff;
  local_190 = 0;
  local_1a4 = 0xffffff;
  local_1b0 = 0;
  local_1b8 = 1;
  uStack_1dc = 6;
  local_1e8 = DAT_141dc7a60;
  FUN_140e87440(&local_1e8,DAT_1419fda38,0x80000000,&local_a8,
                (ulonglong)pcVar13 & 0xffffffffffffff00,
                in_stack_fffffffffffffdd0 & 0xffffffffffffff00);
  if ((1 << ((byte)uStack_1dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1e8);
  }
  uVar16 = 0;
  puVar5 = &local_a8;
  FUN_140e63610(DAT_141dc7a60,param_2,&local_1d8,0,puVar5,0);
  local_1b8 = 2;
  if ((1 << ((byte)local_1cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1d8);
  }
  local_1d8 = 0;
  local_1d0 = 0;
  local_1cc = 5;
  uStack_1dc = 6;
  local_1e8 = DAT_141dc7a60;
  FUN_140e87440(&local_1e8,DAT_141a584c0,0x80000000,&local_b8,(ulonglong)puVar5 & 0xffffffffffffff00
                ,uVar16 & 0xffffffffffffff00);
  if ((1 << ((byte)uStack_1dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1e8);
  }
  local_1f8 = _DAT_1419e7400;
  uStack_1f4 = uRam00000001419e7404;
  uStack_1f0 = uRam00000001419e7408;
  uStack_1ec = uRam00000001419e740c;
  if ((1 << ((byte)_local_16c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_178);
  }
  FUN_140041b80(local_178,&local_1f8);
  local_128 = local_178;
  puVar5 = &local_b8;
  FUN_140e63610(DAT_141dc7a60,param_2,&local_1d8,1,puVar5,&local_128);
  uVar15 = (undefined4)((ulonglong)puVar5 >> 0x20);
  local_1b8 = 4;
  if ((1 << ((byte)local_1cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1d8);
  }
  local_1d8 = 0;
  local_1d0 = 0;
  local_1cc = 5;
  uVar10 = CONCAT44(uVar15,DAT_141a02818);
  FUN_140e634e0(param_1,param_2,&local_1d8,0,uVar10,0);
  uVar15 = (undefined4)((ulonglong)uVar10 >> 0x20);
  local_1b8 = 6;
  puVar4 = (ulonglong *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a02958);
  uStack_1dc = 0xd;
  local_1e8 = 0x3ff0000000000000;
  if (&local_1e8 != puVar4) {
    local_1f8 = 0;
    uStack_1f4 = 0x3ff00000;
    uStack_1f0 = uStack_1e0;
    uStack_1ec = 0xd;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar4 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar4);
    }
    FUN_140041b80(puVar4,&local_1f8);
  }
  local_1b8 = 7;
  puVar4 = (ulonglong *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a02858);
  uStack_1dc = 0xd;
  local_1e8 = 0x3ff0000000000000;
  if (&local_1e8 != puVar4) {
    local_1f8 = 0;
    uStack_1f4 = 0x3ff00000;
    uStack_1f0 = uStack_1e0;
    uStack_1ec = 0xd;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar4 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar4);
    }
    FUN_140041b80(puVar4,&local_1f8);
  }
  local_1b8 = 8;
  puVar4 = (ulonglong *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a02968);
  uStack_1dc = 0xd;
  local_1e8 = 0x3ff0000000000000;
  if (&local_1e8 != puVar4) {
    local_1f8 = 0;
    uStack_1f4 = 0x3ff00000;
    uStack_1f0 = uStack_1e0;
    uStack_1ec = 0xd;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar4 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar4);
    }
    FUN_140041b80(puVar4,&local_1f8);
  }
  local_1b8 = 9;
  puVar4 = (ulonglong *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a02878);
  uStack_1dc = 0xd;
  uVar11 = 0;
  uVar12 = 0;
  local_1e8 = 0;
  if (&local_1e8 != puVar4) {
    local_1f8 = 0;
    uStack_1f4 = 0;
    uStack_1f0 = uStack_1e0;
    uStack_1ec = 0xd;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar4 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar4);
    }
    FUN_140041b80(puVar4,&local_1f8);
  }
  local_1b8 = 10;
  puVar4 = (ulonglong *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a02808);
  uStack_1dc = 0xd;
  local_1e8 = 0;
  if (&local_1e8 != puVar4) {
    local_1f8 = 0;
    uStack_1f4 = 0;
    uStack_1f0 = uStack_1e0;
    uStack_1ec = 0xd;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar4 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar4);
    }
    FUN_140041b80(puVar4,&local_1f8);
  }
  local_1b8 = 0xc;
  puVar5 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a02758);
  FUN_140e609c0(param_1);
  if (puVar5 != &DAT_1419df7b0) {
    local_1f8 = (uint)DAT_1419df7b0;
    uStack_1f4 = DAT_1419df7b0._4_4_;
    uStack_1f0 = DAT_1419df7b8;
    uStack_1ec = DAT_1419df7bc;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar5 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar5);
    }
    FUN_140041b80(puVar5,&local_1f8);
  }
  FUN_140e60910(1);
  local_1b8 = 0xd;
  lVar6 = FUN_140e4cb40(DAT_141a618e8 * 8);
  FUN_141290260(lVar6,DAT_141a618e0,(longlong)DAT_141a618e8 << 3);
  local_1b8 = 0xe;
  if ((1 << ((byte)local_1cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1d8);
  }
  local_1d8 = 0;
  local_1d0 = 0;
  local_1cc = 5;
  puVar7 = (uint *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a02758);
  local_1f8 = DAT_141a599d0 & 0xffffff;
  uStack_1f4 = (int)(DAT_141a599d0 | 0x5000000) >> 0x18 & 0xff;
  if (uStack_1f4 == 0xf) {
    uStack_1f4 = 0x4000004;
  }
  else {
    uStack_1f4 = uStack_1f4 | 0x1000000;
  }
  uStack_1dc = 0xf;
  local_1e8 = CONCAT44(uStack_1f4,DAT_141a599d0) & 0xffffffff00ffffff;
  uStack_1f0 = uStack_1e0;
  uStack_1ec = 0xf;
  if ((1 << ((byte)_local_16c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_178);
  }
  FUN_140041b80(local_178,&local_1f8);
  local_128 = local_178;
  FUN_140e609c0(param_1);
  uVar10 = CONCAT44(uVar15,DAT_141a599f0);
  puVar8 = (uint *)FUN_140e634e0(param_1,param_2,&local_1d8,1,uVar10,&local_128);
  uVar15 = (undefined4)((ulonglong)uVar10 >> 0x20);
  if (puVar8 != puVar7) {
    local_1f8 = *puVar8;
    uStack_1f4 = puVar8[1];
    uStack_1f0 = puVar8[2];
    uStack_1ec = puVar8[3];
    if ((1 << ((byte)puVar7[3] & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar7);
    }
    FUN_140041b80(puVar7,&local_1f8);
  }
  FUN_140e60910(1);
  if (lVar6 != 0) {
    FUN_140e4cd60(lVar6);
  }
  local_1b8 = 0x13;
  puVar5 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a028b8);
  if ((1 << ((byte)*(undefined4 *)((longlong)puVar5 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(puVar5);
  }
  *(undefined4 *)((longlong)puVar5 + 0xc) = 0;
  *puVar5 = 0x416fe00000000000;
  local_1b8 = 0x14;
  puVar5 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a027f8);
  if ((1 << ((byte)*(undefined4 *)((longlong)puVar5 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(puVar5);
  }
  *(undefined4 *)((longlong)puVar5 + 0xc) = 0;
  *puVar5 = 0x416fffffe0000000;
  local_1b8 = 0x15;
  puVar5 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a02948);
  if ((1 << ((byte)*(undefined4 *)((longlong)puVar5 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(puVar5);
  }
  *(undefined4 *)((longlong)puVar5 + 0xc) = 0;
  *puVar5 = 0x40efe00000000000;
  local_1b8 = 0x16;
  if ((1 << ((byte)local_1cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1d8);
  }
  local_1d8 = 0;
  local_1d0 = 0;
  local_1cc = 5;
  puVar7 = (uint *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a028e8);
  local_1f8 = DAT_141a58250 & 0xffffff;
  uStack_1f4 = (int)(DAT_141a58250 | 0x5000000) >> 0x18 & 0xff;
  if (uStack_1f4 == 0xf) {
    uStack_1f4 = 0x4000004;
  }
  else {
    uStack_1f4 = uStack_1f4 | 0x1000000;
  }
  uStack_1dc = 0xf;
  local_1e8 = CONCAT44(uStack_1f4,DAT_141a58250) & 0xffffffff00ffffff;
  uStack_1f0 = uStack_1e0;
  uStack_1ec = 0xf;
  if ((1 << ((byte)_local_16c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_178);
  }
  FUN_140041b80(local_178,&local_1f8);
  local_128 = local_178;
  local_1f8 = _DAT_1419e73f0;
  uStack_1f4 = uRam00000001419e73f4;
  uStack_1f0 = uRam00000001419e73f8;
  uStack_1ec = uRam00000001419e73fc;
  if ((1 << ((byte)local_15c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_168);
  }
  FUN_140041b80(&local_168,&local_1f8);
  local_120 = &local_168;
  local_1f8 = _DAT_1419e7410;
  uStack_1f4 = uRam00000001419e7414;
  uStack_1f0 = uRam00000001419e7418;
  uStack_1ec = uRam00000001419e741c;
  if ((1 << ((byte)local_14c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_158);
  }
  FUN_140041b80(&local_158,&local_1f8);
  local_118 = &local_158;
  FUN_140e609c0(param_1);
  uVar10 = CONCAT44(uVar15,DAT_1419fd6d8);
  puVar8 = (uint *)FUN_140e634e0(param_1,param_2,&local_1d8,3,uVar10,&local_128);
  uVar15 = (undefined4)((ulonglong)uVar10 >> 0x20);
  if (puVar8 != puVar7) {
    local_1f8 = *puVar8;
    uStack_1f4 = puVar8[1];
    uStack_1f0 = puVar8[2];
    uStack_1ec = puVar8[3];
    if ((1 << ((byte)puVar7[3] & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar7);
    }
    FUN_140041b80(puVar7,&local_1f8);
  }
  FUN_140e60910(1);
  local_1b8 = 0x17;
  puVar5 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a028f8);
  if ((1 << ((byte)*(undefined4 *)((longlong)puVar5 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(puVar5);
  }
  *(undefined4 *)((longlong)puVar5 + 0xc) = 0;
  *puVar5 = 0x416fe01fe0000000;
  local_1b8 = 0x18;
  if ((1 << ((byte)local_1cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1d8);
  }
  local_1d8 = 0;
  local_1d0 = 0;
  local_1cc = 5;
  puVar7 = (uint *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a02908);
  local_1f8 = DAT_141a58250 & 0xffffff;
  uStack_1f4 = (int)(DAT_141a58250 | 0x5000000) >> 0x18 & 0xff;
  if (uStack_1f4 == 0xf) {
    uStack_1f4 = 0x4000004;
  }
  else {
    uStack_1f4 = uStack_1f4 | 0x1000000;
  }
  uStack_1dc = 0xf;
  local_1e8 = CONCAT44(uStack_1f4,DAT_141a58250) & 0xffffffff00ffffff;
  uStack_1f0 = uStack_1e0;
  uStack_1ec = 0xf;
  if ((1 << ((byte)_local_16c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_178);
  }
  FUN_140041b80(local_178,&local_1f8);
  local_128 = local_178;
  local_168 = FUN_140e78f00(0xff);
  if ((1 << ((byte)local_15c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_168);
  }
  local_15c = 0;
  local_120 = &local_168;
  local_158 = FUN_140e78f00(0xff);
  if ((1 << ((byte)local_14c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_158);
  }
  local_14c = 0;
  local_118 = &local_158;
  local_148 = FUN_140e78f00(0xff);
  if ((1 << ((byte)local_13c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_148);
  }
  local_13c = 0;
  local_110 = &local_148;
  local_138 = FUN_140e79480(0);
  if ((1 << ((byte)local_12c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_138);
  }
  local_12c = 0;
  local_108 = &local_138;
  FUN_140e609c0(param_1);
  uVar10 = CONCAT44(uVar15,DAT_1419fd6d8);
  puVar8 = (uint *)FUN_140e634e0(param_1,param_2,&local_1d8,5,uVar10,&local_128);
  if (puVar8 != puVar7) {
    local_1f8 = *puVar8;
    uStack_1f4 = puVar8[1];
    uStack_1f0 = puVar8[2];
    uStack_1ec = puVar8[3];
    if ((1 << ((byte)puVar7[3] & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar7);
    }
    FUN_140041b80(puVar7,&local_1f8);
  }
  FUN_140e60910(1);
  local_1b8 = 0x19;
  puVar5 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a1eed0);
  if ((1 << ((byte)*(undefined4 *)((longlong)puVar5 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(puVar5);
  }
  *(undefined4 *)((longlong)puVar5 + 0xc) = 10;
  *puVar5 = 1;
  local_1b8 = 0x1b;
  puVar5 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a04448);
  if ((1 << ((byte)*(undefined4 *)((longlong)puVar5 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(puVar5);
  }
  *(undefined4 *)((longlong)puVar5 + 0xc) = 0;
  *puVar5 = &DAT_bff0000000000000;
  local_1b8 = 0x1d;
  puVar9 = (undefined *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a02778);
  if (puVar9 != &DAT_141dd5388) {
    local_1f8 = _DAT_141dd5388;
    uStack_1f4 = uRam0000000141dd538c;
    uStack_1f0 = uRam0000000141dd5390;
    uStack_1ec = DAT_141dd5394;
    if ((1 << ((byte)*(undefined4 *)(puVar9 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar9);
    }
    FUN_140041b80(puVar9,&local_1f8);
  }
  local_1b8 = 0x1e;
  puVar9 = (undefined *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a02838);
  if (puVar9 != &DAT_141dd5358) {
    local_1f8 = _DAT_141dd5358;
    uStack_1f4 = uRam0000000141dd535c;
    uStack_1f0 = uRam0000000141dd5360;
    uStack_1ec = DAT_141dd5364;
    if ((1 << ((byte)*(undefined4 *)(puVar9 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar9);
    }
    FUN_140041b80(puVar9,&local_1f8);
  }
  local_1b8 = 0x1f;
  puVar9 = (undefined *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a02928);
  if (puVar9 != &DAT_141dd5418) {
    local_1f8 = _DAT_141dd5418;
    uStack_1f4 = uRam0000000141dd541c;
    uStack_1f0 = uRam0000000141dd5420;
    uStack_1ec = DAT_141dd5424;
    if ((1 << ((byte)*(undefined4 *)(puVar9 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar9);
    }
    FUN_140041b80(puVar9,&local_1f8);
  }
  local_1b8 = 0x21;
  puVar5 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a028d8);
  uVar14 = FUN_140e78f00(0xff);
  if ((1 << ((byte)*(undefined4 *)((longlong)puVar5 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(puVar5);
  }
  *(undefined4 *)((longlong)puVar5 + 0xc) = 0;
  *puVar5 = uVar14;
  local_1b8 = 0x22;
  puVar5 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a028a8);
  uVar14 = FUN_140e79480(0);
  if ((1 << ((byte)*(undefined4 *)((longlong)puVar5 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(puVar5);
  }
  *(undefined4 *)((longlong)puVar5 + 0xc) = 0;
  *puVar5 = uVar14;
  local_1b8 = 0x23;
  puVar7 = (uint *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a02898);
  FUN_140e609c0(param_1);
  puVar8 = (uint *)FUN_140e8da20(&local_1d8,param_1,0);
  if (puVar8 != puVar7) {
    local_1f8 = *puVar8;
    uStack_1f4 = puVar8[1];
    uStack_1f0 = puVar8[2];
    uStack_1ec = puVar8[3];
    if ((1 << ((byte)puVar7[3] & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar7);
    }
    FUN_140041b80(puVar7,&local_1f8);
  }
  FUN_140e60910(1);
  local_1b8 = 0x24;
  puVar7 = (uint *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a028c8);
  FUN_140e609c0(param_1);
  puVar8 = (uint *)FUN_140e8da20(&local_98,param_1,0);
  if (puVar8 != puVar7) {
    local_1f8 = *puVar8;
    uStack_1f4 = puVar8[1];
    uStack_1f0 = puVar8[2];
    uStack_1ec = puVar8[3];
    if ((1 << ((byte)puVar7[3] & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar7);
    }
    FUN_140041b80(puVar7,&local_1f8);
  }
  FUN_140e60910(1);
  local_1b8 = 0x25;
  if ((1 << ((byte)local_194 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1a0);
  }
  local_194 = 0;
  local_1a0 = 0.0;
  bVar1 = true;
  do {
    uVar15 = (undefined4)((ulonglong)uVar10 >> 0x20);
    if (!bVar1) {
      local_1b8 = 0x25;
      uVar2 = local_194 & 0xffffff;
      if (uVar2 == 0) {
LAB_1406929b5:
        local_1a0 = (double)CONCAT44(uVar12,uVar11) + 1.0;
      }
      else if (uVar2 == 1) {
        local_1a0 = (double)FUN_140e4b060(&local_1a0);
        local_1a0 = local_1a0 + 1.0;
        local_194 = 0;
      }
      else if (uVar2 == 7) {
        local_1a0 = (double)CONCAT44(local_1a0._4_4_,local_1a0._0_4_ + 1);
      }
      else if (uVar2 == 10) {
        local_1a0 = (double)((longlong)local_1a0 + 1);
      }
      else {
        if (uVar2 == 0xd) {
          local_194 = 0;
          goto LAB_1406929b5;
        }
        FUN_140042910(&DAT_14172c3d8,&local_1a0,&local_1a0);
      }
    }
    bVar1 = false;
    uStack_1dc = 0;
    local_1e8 = 0x4028000000000000;
    iVar3 = FUN_140e851f0(&local_1a0,&local_1e8,DAT_141955260,1);
    if ((1 << ((byte)uStack_1dc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1e8);
    }
    if (iVar3 == -2 || -1 < iVar3) {
      local_1b8 = 0x2a;
      puVar5 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a02768);
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar5 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar5);
      }
      *(undefined4 *)((longlong)puVar5 + 0xc) = 0;
      *puVar5 = 0;
      local_1b8 = 0x2b;
      puVar7 = (uint *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a02828);
      FUN_140e609c0(param_1);
      puVar17 = &DAT_141dd53c8;
      puVar9 = &DAT_141dd5398;
      puVar8 = (uint *)FUN_140e8da20(&local_190,param_1,9,&DAT_141dd5378,&DAT_141dd5398,
                                     &DAT_141dd53c8,&DAT_141dd53a8,&DAT_141dd53f8,&DAT_141dd5408,
                                     &DAT_141dd53e8,&DAT_141dd53d8,&DAT_141dd53b8);
      if (puVar8 != puVar7) {
        local_1f8 = *puVar8;
        uStack_1f4 = puVar8[1];
        uStack_1f0 = puVar8[2];
        uStack_1ec = puVar8[3];
        if ((1 << ((byte)puVar7[3] & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(puVar7);
        }
        FUN_140041b80(puVar7,&local_1f8);
      }
      FUN_140e60910(1);
      local_1b8 = 0x31;
      puVar4 = (ulonglong *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a02888);
      uStack_1dc = 0xd;
      local_1e8 = 0x3ff0000000000000;
      if (&local_1e8 != puVar4) {
        local_1f8 = 0;
        uStack_1f4 = 0x3ff00000;
        uStack_1f0 = uStack_1e0;
        uStack_1ec = 0xd;
        if ((1 << ((byte)*(undefined4 *)((longlong)puVar4 + 0xc) & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(puVar4);
        }
        FUN_140041b80(puVar4,&local_1f8);
      }
      local_1b8 = 0x33;
      if ((1 << ((byte)local_1a4 & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_1b0);
      }
      local_1b0 = 0;
      local_1a8 = 0;
      local_1a4 = 5;
      puVar7 = (uint *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a027c8);
      uStack_1dc = 6;
      local_1e8 = DAT_141dc7a60;
      FUN_140e87440(&local_1e8,DAT_141a58d50,0x80000000,&local_d8,
                    (ulonglong)puVar9 & 0xffffffffffffff00,(ulonglong)puVar17 & 0xffffffffffffff00);
      if ((1 << ((byte)uStack_1dc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_1e8);
      }
      FUN_140e609c0(param_1);
      uVar16 = 0;
      puVar5 = &local_d8;
      puVar8 = (uint *)FUN_140e63610(DAT_141dc7a60,param_2,&local_1b0,0,puVar5,0);
      if (puVar8 != puVar7) {
        local_1f8 = *puVar8;
        uStack_1f4 = puVar8[1];
        uStack_1f0 = puVar8[2];
        uStack_1ec = puVar8[3];
        if ((1 << ((byte)puVar7[3] & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(puVar7);
        }
        FUN_140041b80(puVar7,&local_1f8);
      }
      FUN_140e60910(1);
      local_1b8 = 0x34;
      if ((1 << ((byte)local_1a4 & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_1b0);
      }
      local_1b0 = 0;
      local_1a8 = 0;
      local_1a4 = 5;
      puVar7 = (uint *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a02918);
      uStack_1dc = 6;
      local_1e8 = DAT_141dc7a60;
      FUN_140e87440(&local_1e8,DAT_141a58940,0x80000000,&local_e8,
                    (ulonglong)puVar5 & 0xffffffffffffff00,uVar16 & 0xffffffffffffff00);
      if ((1 << ((byte)uStack_1dc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_1e8);
      }
      local_1f8 = _DAT_141dd5428;
      uStack_1f4 = uRam0000000141dd542c;
      uStack_1f0 = uRam0000000141dd5430;
      uStack_1ec = DAT_141dd5434;
      if ((1 << (local_16c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_178);
      }
      FUN_140041b80(local_178,&local_1f8);
      local_128 = local_178;
      local_1f8 = _DAT_1419e7420;
      uStack_1f4 = uRam00000001419e7424;
      uStack_1f0 = uRam00000001419e7428;
      uStack_1ec = uRam00000001419e742c;
      if ((1 << ((byte)local_15c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_168);
      }
      FUN_140041b80(&local_168,&local_1f8);
      local_120 = &local_168;
      FUN_140e609c0(param_1);
      puVar5 = &local_e8;
      puVar8 = (uint *)FUN_140e63610(DAT_141dc7a60,param_2,&local_1b0,2,puVar5,&local_128);
      uVar15 = (undefined4)((ulonglong)puVar5 >> 0x20);
      if (puVar8 != puVar7) {
        local_1f8 = *puVar8;
        uStack_1f4 = puVar8[1];
        uStack_1f0 = puVar8[2];
        uStack_1ec = puVar8[3];
        if ((1 << ((byte)puVar7[3] & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(puVar7);
        }
        FUN_140041b80(puVar7,&local_1f8);
      }
      FUN_140e60910(1);
      local_1b8 = 0x36;
      puVar5 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a02848);
      if ((1 << ((byte)local_1a4 & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_1b0);
      }
      local_1b0 = 0;
      local_1a8 = 0;
      local_1a4 = 5;
      local_1f8 = _DAT_141dd5368;
      uStack_1f4 = uRam0000000141dd536c;
      uStack_1f0 = uRam0000000141dd5370;
      uStack_1ec = DAT_141dd5374;
      if ((1 << (local_16c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_178);
      }
      FUN_140041b80(local_178,&local_1f8);
      local_128 = local_178;
      local_1f8 = _DAT_1419df7c0;
      uStack_1f4 = uRam00000001419df7c4;
      uStack_1f0 = uRam00000001419df7c8;
      uStack_1ec = uRam00000001419df7cc;
      if ((1 << ((byte)local_15c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_168);
      }
      FUN_140041b80(&local_168,&local_1f8);
      local_120 = &local_168;
      ppuVar18 = &local_128;
      uVar16 = CONCAT44(uVar15,DAT_141a570c0);
      uVar10 = FUN_140e634e0(param_1,param_2,&local_1b0,2,uVar16,ppuVar18);
      FUN_140e87440(uVar10,DAT_141a02868,0x80000000,&local_f8,uVar16 & 0xffffffffffffff00,
                    (ulonglong)ppuVar18 & 0xffffffffffffff00);
      FUN_140e609c0(param_1);
      if (&local_f8 != puVar5) {
        local_1f8 = (uint)local_f8;
        uStack_1f4 = local_f8._4_4_;
        uStack_1f0 = uStack_f0;
        uStack_1ec = uStack_ec;
        if ((1 << ((byte)*(undefined4 *)((longlong)puVar5 + 0xc) & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(puVar5);
        }
        FUN_140041b80(puVar5,&local_1f8);
      }
      FUN_140e60910(1);
      local_1b8 = 0x37;
      puVar5 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a02938);
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar5 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar5);
      }
      *(undefined4 *)((longlong)puVar5 + 0xc) = 0;
      *puVar5 = 0;
      local_1b8 = 0x38;
      puVar5 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a0a848);
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar5 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar5);
      }
      *(undefined4 *)((longlong)puVar5 + 0xc) = 0;
      *puVar5 = 0;
      if ((1 << ((byte)local_1a4 & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_1b0);
      }
      if ((1 << ((byte)local_184 & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_190);
      }
      if ((1 << ((byte)local_8c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_98);
      }
      if ((1 << ((byte)local_1cc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_1d8);
      }
      if ((1 << ((byte)uStack_ec & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_f8);
      }
      if ((1 << ((byte)local_dc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_e8);
      }
      if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_d8);
      }
      if ((1 << ((byte)local_194 & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_1a0);
      }
      if ((1 << ((byte)local_ac & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_b8);
      }
      if ((1 << ((byte)local_9c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_a8);
      }
      _eh_vector_destructor_iterator_(local_178,0x10,5,FUN_140041b30);
      DAT_141dc7a50 = (undefined8 *)local_1c8;
      return;
    }
    local_1b8 = 0x26;
    if ((1 << ((byte)local_184 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_190);
    }
    local_190 = 0;
    local_188 = 0;
    local_184 = 5;
    puVar7 = (uint *)(**(code **)(*param_1 + 8))(param_1,DAT_141a02898);
    if (puVar7 != local_178) {
      local_1f8 = *puVar7;
      uStack_1f4 = puVar7[1];
      uStack_1f0 = puVar7[2];
      uStack_1ec = puVar7[3];
      if ((1 << ((byte)_local_16c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_178);
      }
      FUN_140041b80(local_178,&local_1f8);
    }
    local_128 = local_178;
    uVar10 = FUN_140e78f00(0xff);
    if ((1 << ((byte)local_15c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_168);
    }
    local_15c = 0;
    local_120 = &local_168;
    uVar14 = CONCAT44(uVar15,DAT_1419fe568);
    local_168 = uVar10;
    FUN_140e634e0(param_1,param_2,&local_190,2,uVar14,&local_128);
    uVar15 = (undefined4)((ulonglong)uVar14 >> 0x20);
    local_1b8 = 0x27;
    if ((1 << ((byte)local_184 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_190);
    }
    local_190 = 0;
    local_188 = 0;
    local_184 = 5;
    puVar7 = (uint *)(**(code **)(*param_1 + 8))(param_1,DAT_141a028c8);
    if (puVar7 != local_178) {
      local_1f8 = *puVar7;
      uStack_1f4 = puVar7[1];
      uStack_1f0 = puVar7[2];
      uStack_1ec = puVar7[3];
      if ((1 << ((byte)_local_16c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_178);
      }
      FUN_140041b80(local_178,&local_1f8);
    }
    local_128 = local_178;
    uVar14 = FUN_140e78f00(0xff);
    if ((1 << ((byte)local_15c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_168);
    }
    local_15c = 0;
    local_120 = &local_168;
    uVar10 = CONCAT44(uVar15,DAT_1419fe568);
    local_168 = uVar14;
    FUN_140e634e0(param_1,param_2,&local_190,2,uVar10,&local_128);
    uVar11 = SUB84(local_1a0,0);
    uVar12 = (undefined4)((ulonglong)local_1a0 >> 0x20);
  } while( true );
}

