// gml_Object_oLifeSteal_Create_0 @ 0x140b40ce0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void gml_Object_oLifeSteal_Create_0(longlong *param_1,undefined8 param_2)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  longlong **pplVar6;
  longlong ***ppplVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  longlong **pplVar10;
  double *pdVar11;
  undefined8 uVar12;
  undefined8 *puVar13;
  longlong **pplVar14;
  float fVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  undefined4 uVar21;
  ulonglong uVar20;
  longlong ***ppplVar22;
  ulonglong uVar23;
  undefined8 local_1e8;
  undefined4 uStack_1e0;
  undefined4 uStack_1dc;
  longlong *local_1d8;
  undefined4 uStack_1d0;
  undefined4 uStack_1cc;
  undefined8 local_1c8;
  undefined4 local_1c0;
  undefined4 local_1bc;
  longlong *local_1b8;
  byte local_1ac;
  undefined1 local_1a8 [12];
  byte local_19c;
  undefined1 local_198 [12];
  byte local_18c;
  undefined8 local_188;
  byte local_17c;
  undefined8 local_178;
  undefined4 local_170;
  undefined4 local_16c;
  undefined8 local_168;
  char *local_160;
  undefined4 local_158;
  longlong **local_150;
  undefined1 *local_148;
  undefined1 *local_140;
  undefined8 *local_138;
  undefined8 local_128;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  longlong *local_118;
  undefined4 local_110;
  undefined4 local_10c;
  undefined8 local_108;
  undefined4 local_fc;
  undefined8 local_f8;
  undefined4 local_ec;
  undefined8 local_e8;
  undefined4 local_dc;
  double local_d8;
  uint local_cc;
  double local_c8;
  uint local_bc;
  double local_b8;
  uint local_ac;
  double local_a8;
  uint local_9c;
  undefined8 local_98;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined8 local_88;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 local_78;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  
  local_160 = "gml_Object_oLeechBall_Step_0";
  local_158 = 0;
  local_168 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_168;
  _eh_vector_constructor_iterator_(&local_1b8,0x10,4,FUN_1400424d0,FUN_140041b30);
  uStack_11c = 0xffffff;
  local_128 = 0;
  local_fc = 0xffffff;
  local_108 = 0;
  uVar4 = (**(code **)(*DAT_141a729d8 + 8))(DAT_141a729d8,DAT_141a0a9c8);
  local_9c = 0xffffff;
  local_a8 = 0.0;
  local_ac = 0xffffff;
  local_b8 = 0.0;
  local_bc = 0xffffff;
  local_c8 = 0.0;
  local_cc = 0xffffff;
  local_d8 = 0.0;
  local_dc = 0xffffff;
  local_e8 = 0;
  local_ec = 0xffffff;
  local_f8 = 0;
  uStack_6c = 0xffffff;
  local_78 = 0;
  uVar5 = (**(code **)(*DAT_141a729d8 + 8))(DAT_141a729d8,DAT_141a1ef20);
  uStack_7c = 0xffffff;
  local_88 = 0;
  pplVar6 = (longlong **)(**(code **)(*DAT_141a729d8 + 8))(DAT_141a729d8,DAT_1419f3dd8);
  uStack_8c = 0xffffff;
  local_98 = 0;
  local_1bc = 0xffffff;
  local_1c8 = 0;
  local_16c = 0xffffff;
  local_178 = 0;
  local_158 = 2;
  ppplVar7 = (longlong ***)(**(code **)(*param_1 + 8))(param_1,DAT_141a01b58);
  ppplVar22 = (longlong ***)0x0;
  uVar8 = FUN_140e63610(param_1,param_2,&local_1c8,0,ppplVar7,0);
  cVar1 = FUN_140e491e0(uVar8);
  if (cVar1 != '\0') {
    local_158 = 4;
    if ((1 << ((byte)local_16c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_178);
    }
    local_178 = 0;
    local_170 = 0;
    local_16c = 5;
    uStack_1cc = 6;
    ppplVar22 = (longlong ***)((ulonglong)ppplVar22 & 0xffffffffffffff00);
    local_1d8 = param_1;
    FUN_140e87440(&local_1d8,DAT_141a0f7f8,0x80000000,&local_128,
                  (ulonglong)ppplVar7 & 0xffffffffffffff00,ppplVar22);
    if ((1 << ((byte)uStack_1cc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1d8);
    }
    local_1e8 = (longlong *)local_128;
    uStack_1e0 = uStack_120;
    uStack_1dc = uStack_11c;
    if ((1 << (local_1ac & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1b8);
    }
    FUN_140041b80(&local_1b8,&local_1e8);
    local_150 = &local_1b8;
    local_1e8 = (longlong *)CONCAT44(uRam00000001419ec004,_DAT_1419ec000);
    uStack_1e0 = uRam00000001419ec008;
    uStack_1dc = uRam00000001419ec00c;
    if ((1 << (local_19c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_1a8);
    }
    FUN_140041b80(local_1a8,&local_1e8);
    local_148 = local_1a8;
    local_1e8 = (longlong *)CONCAT44(uRam00000001419ec014,_DAT_1419ec010);
    uStack_1e0 = uRam00000001419ec018;
    uStack_1dc = uRam00000001419ec01c;
    if ((1 << (local_18c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_198);
    }
    FUN_140041b80(local_198,&local_1e8);
    local_140 = local_198;
    ppplVar7 = &local_150;
    puVar9 = (undefined8 *)gml_Script_arc(param_1,param_2,&local_178,3,ppplVar7);
    if (puVar9 != &local_108) {
      local_1e8 = (longlong *)*puVar9;
      uStack_1e0 = *(undefined4 *)(puVar9 + 1);
      uStack_1dc = *(undefined4 *)((longlong)puVar9 + 0xc);
      if ((1 << ((byte)local_fc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_108);
      }
      FUN_140041b80(&local_108,&local_1e8);
    }
    FUN_140e86fa0(param_1,DAT_141a0f7f8,0x80000000,&local_108);
  }
  local_158 = 8;
  uVar8 = (**(code **)(*param_1 + 8))(param_1,DAT_141a0a848);
  uStack_1cc = 0;
  local_1d8 = (longlong *)0x4024000000000000;
  uVar2 = FUN_140e851f0(uVar8,&local_1d8,DAT_141955260,1);
  if ((1 << ((byte)uStack_1cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1d8);
  }
  if (uVar2 < 0x80000000) {
    local_158 = 10;
    puVar9 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a0a848);
    uVar21 = (undefined4)((ulonglong)ppplVar7 >> 0x20);
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar9 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar9);
    }
    *(undefined4 *)((longlong)puVar9 + 0xc) = 0;
    *puVar9 = 0;
    local_158 = 0xb;
    if ((1 << ((byte)local_1bc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1c8);
    }
    local_1c8 = 0;
    local_1c0 = 0;
    local_1bc = 5;
    pplVar10 = (longlong **)(**(code **)(*param_1 + 8))(param_1,DAT_1419fe9b8);
    if (pplVar10 != &local_1b8) {
      local_1e8 = *pplVar10;
      uStack_1e0 = *(undefined4 *)(pplVar10 + 1);
      uStack_1dc = *(undefined4 *)((longlong)pplVar10 + 0xc);
      if ((1 << (local_1ac & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_1b8);
      }
      FUN_140041b80(&local_1b8,&local_1e8);
    }
    local_150 = &local_1b8;
    ppplVar22 = &local_150;
    ppplVar7 = (longlong ***)CONCAT44(uVar21,DAT_141a57c30);
    FUN_140e634e0(param_1,param_2,&local_1c8,1,ppplVar7,ppplVar22);
  }
  local_158 = 0xf;
  uVar8 = (**(code **)(*param_1 + 0x10))(param_1,DAT_141a1f500);
  uStack_1cc = 0;
  local_1d8 = (longlong *)0x3fc999999999999a;
  FUN_140042560(&local_1d8,uVar4);
  FUN_1400460e0(uVar8,&local_1d8);
  if ((1 << ((byte)uStack_1cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1d8);
  }
  local_158 = 0x11;
  pdVar11 = (double *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a1eed0);
  uStack_1cc = 6;
  uVar20 = (ulonglong)ppplVar22 & 0xffffffffffffff00;
  uVar23 = (ulonglong)ppplVar7 & 0xffffffffffffff00;
  local_1d8 = param_1;
  FUN_140e87440(&local_1d8,DAT_1419fded8,0x80000000,&local_a8,uVar23,uVar20);
  if ((1 << ((byte)uStack_1cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1d8);
  }
  uStack_1cc = 6;
  uVar20 = uVar20 & 0xffffffffffffff00;
  uVar23 = uVar23 & 0xffffffffffffff00;
  local_1d8 = param_1;
  FUN_140e87440(&local_1d8,DAT_1419fdd18,0x80000000,&local_b8,uVar23,uVar20);
  if ((1 << ((byte)uStack_1cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1d8);
  }
  uStack_1cc = 6;
  uVar20 = uVar20 & 0xffffffffffffff00;
  uVar23 = uVar23 & 0xffffffffffffff00;
  local_1d8 = param_1;
  FUN_140e87440(&local_1d8,DAT_1419fe0e8,0x80000000,&local_c8,uVar23,uVar20);
  if ((1 << ((byte)uStack_1cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1d8);
  }
  uStack_1cc = 6;
  local_1d8 = param_1;
  FUN_140e87440(&local_1d8,DAT_1419fe158,0x80000000,&local_d8,uVar23 & 0xffffffffffffff00,
                uVar20 & 0xffffffffffffff00);
  if ((1 << ((byte)uStack_1cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1d8);
  }
  dVar16 = local_d8;
  if ((local_cc & 0xffffff) != 0) {
    dVar16 = (double)FUN_140e4b060(&local_d8);
  }
  dVar17 = local_c8;
  if ((local_bc & 0xffffff) != 0) {
    dVar17 = (double)FUN_140e4b060(&local_c8);
  }
  dVar18 = local_b8;
  if ((local_ac & 0xffffff) != 0) {
    dVar18 = (double)FUN_140e4b060(&local_b8);
  }
  dVar19 = local_a8;
  if ((local_9c & 0xffffff) != 0) {
    dVar19 = (double)FUN_140e4b060(&local_a8);
  }
  fVar15 = (float)FUN_140e793d0((float)dVar19,(float)dVar18,(float)dVar17,(float)dVar16);
  if ((1 << ((byte)*(undefined4 *)((longlong)pdVar11 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(pdVar11);
  }
  *(undefined4 *)((longlong)pdVar11 + 0xc) = 0;
  *pdVar11 = (double)fVar15;
  local_158 = 0x13;
  uVar8 = (**(code **)(*param_1 + 8))(param_1,DAT_141a1f230);
  uVar12 = (**(code **)(*param_1 + 0x10))(param_1,DAT_141a0a7f8);
  uStack_1cc = 0;
  local_1d8 = (longlong *)0x4000000000000000;
  FUN_140042560(&local_1d8,uVar8);
  FUN_1400460e0(uVar12,&local_1d8);
  if ((1 << ((byte)uStack_1cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1d8);
  }
  local_158 = 0x15;
  if ((1 << ((byte)local_1bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1c8);
  }
  local_1c8 = 0;
  local_1c0 = 0;
  local_1bc = 5;
  uVar8 = (**(code **)(*param_1 + 8))(param_1,DAT_1419fd4b8);
  uVar23 = 0;
  FUN_140e63610(param_1,param_2,&local_1c8,0,uVar8,0);
  local_158 = 0x16;
  if ((1 << ((byte)local_1bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1c8);
  }
  local_1c8 = 0;
  local_1c0 = 0;
  local_1bc = 5;
  uStack_1dc = 0xf;
  local_1e8 = (longlong *)0x100000000000149;
  local_1d8 = (longlong *)0x100000000000149;
  uStack_1d0 = uStack_1e0;
  uStack_1cc = 0xf;
  if ((1 << (local_1ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1b8);
  }
  FUN_140041b80(&local_1b8,&local_1d8);
  local_150 = &local_1b8;
  ppplVar7 = &local_150;
  gml_GlobalScript_world_pos_to_gui(param_1,param_2,&local_1c8,1,ppplVar7);
  local_158 = 0x18;
  pplVar10 = (longlong **)(**(code **)(*param_1 + 8))(param_1,DAT_141a0a748);
  local_10c = 0;
  local_118 = (longlong *)0x3ff0000000000000;
  FUN_1400462a0(&local_118,pplVar10);
  uStack_1cc = local_10c;
  uStack_1d0 = local_110;
  if ((1 << ((byte)local_10c & 0x1f) & 0x46U) == 0) {
    local_1d8 = local_118;
  }
  else {
    FUN_1400419b0(&local_1d8,&local_118);
  }
  uStack_1dc = 7;
  local_1e8 = (longlong *)CONCAT44(local_1e8._4_4_,4);
  FUN_140042560(&local_1d8,&local_1e8);
  if ((1 << ((byte)uStack_1dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1e8);
  }
  local_1e8 = local_1d8;
  uStack_1e0 = uStack_1d0;
  uStack_1dc = uStack_1cc;
  if ((1 << ((byte)local_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e8);
  }
  FUN_140041b80(&local_e8,&local_1e8);
  if ((1 << ((byte)uStack_1cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1d8);
  }
  if ((1 << ((byte)local_10c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_118);
  }
  FUN_140e86fa0(param_1,DAT_141a0cfc8,0x80000000,&local_e8);
  local_158 = 0x1a;
  uStack_1dc = 6;
  uVar23 = uVar23 & 0xffffffffffffff00;
  uVar20 = (ulonglong)ppplVar7 & 0xffffffffffffff00;
  local_1e8 = param_1;
  FUN_140e87440(&local_1e8,DAT_141a0f7f8,0x80000000,&local_128,uVar20,uVar23);
  if ((1 << ((byte)uStack_1dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1e8);
  }
  local_1e8 = (longlong *)local_128;
  uStack_1e0 = uStack_120;
  uStack_1dc = uStack_11c;
  if ((1 << ((byte)local_ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f8);
  }
  FUN_140041b80(&local_f8,&local_1e8);
  FUN_140e86fa0(param_1,DAT_141a0f938,0x80000000,&local_f8);
  local_158 = 0x1c;
  if ((1 << ((byte)local_1bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1c8);
  }
  local_1c8 = 0;
  local_1c0 = 0;
  local_1bc = 5;
  puVar9 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a0a748);
  uStack_1dc = 6;
  uVar20 = uVar20 & 0xffffffffffffff00;
  local_1e8 = param_1;
  FUN_140e87440(&local_1e8,DAT_141a0f7f8,0x80000000,&local_128,uVar20,uVar23 & 0xffffffffffffff00);
  uVar21 = (undefined4)(uVar20 >> 0x20);
  if ((1 << ((byte)uStack_1dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1e8);
  }
  if (pplVar10 != &local_1b8) {
    local_1e8 = *pplVar10;
    uStack_1e0 = *(undefined4 *)(pplVar10 + 1);
    uStack_1dc = *(undefined4 *)((longlong)pplVar10 + 0xc);
    if ((1 << (local_1ac & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1b8);
    }
    FUN_140041b80(&local_1b8,&local_1e8);
  }
  local_150 = &local_1b8;
  local_1e8 = (longlong *)local_128;
  uStack_1e0 = uStack_120;
  uStack_1dc = uStack_11c;
  if ((1 << (local_19c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_1a8);
  }
  FUN_140041b80(local_1a8,&local_1e8);
  local_148 = local_1a8;
  local_1e8 = (longlong *)CONCAT44(uRam00000001419ec024,_DAT_1419ec020);
  uStack_1e0 = uRam00000001419ec028;
  uStack_1dc = uRam00000001419ec02c;
  if ((1 << (local_18c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_198);
  }
  FUN_140041b80(local_198,&local_1e8);
  local_140 = local_198;
  FUN_140e609c0(param_1);
  ppplVar7 = &local_150;
  uVar23 = CONCAT44(uVar21,DAT_141a00c58);
  puVar13 = (undefined8 *)FUN_140e634e0(param_1,param_2,&local_1c8,3,uVar23,ppplVar7);
  if (puVar13 != puVar9) {
    local_1e8 = (longlong *)*puVar13;
    uStack_1e0 = *(undefined4 *)(puVar13 + 1);
    uStack_1dc = *(undefined4 *)((longlong)puVar13 + 0xc);
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar9 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar9);
    }
    FUN_140041b80(puVar9,&local_1e8);
  }
  FUN_140e60910(1);
  local_158 = 0x1d;
  if ((1 << ((byte)local_1bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1c8);
  }
  local_1c8 = 0;
  local_1c0 = 0;
  local_1bc = 5;
  pplVar14 = (longlong **)(**(code **)(*param_1 + 8))(param_1,DAT_141a0a858);
  puVar9 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a0a858);
  uStack_1dc = 6;
  uVar23 = uVar23 & 0xffffffffffffff00;
  local_1e8 = param_1;
  FUN_140e87440(&local_1e8,DAT_141a0f938,0x80000000,&local_78,uVar23,
                (ulonglong)ppplVar7 & 0xffffffffffffff00);
  uVar21 = (undefined4)(uVar23 >> 0x20);
  if ((1 << ((byte)uStack_1dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1e8);
  }
  if (pplVar14 != &local_1b8) {
    local_1e8 = *pplVar14;
    uStack_1e0 = *(undefined4 *)(pplVar14 + 1);
    uStack_1dc = *(undefined4 *)((longlong)pplVar14 + 0xc);
    if ((1 << (local_1ac & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1b8);
    }
    FUN_140041b80(&local_1b8,&local_1e8);
  }
  local_150 = &local_1b8;
  local_1e8 = (longlong *)local_78;
  uStack_1e0 = uStack_70;
  uStack_1dc = uStack_6c;
  if ((1 << (local_19c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_1a8);
  }
  FUN_140041b80(local_1a8,&local_1e8);
  local_148 = local_1a8;
  local_1e8 = (longlong *)CONCAT44(uRam00000001419ec024,_DAT_1419ec020);
  uStack_1e0 = uRam00000001419ec028;
  uStack_1dc = uRam00000001419ec02c;
  if ((1 << (local_18c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_198);
  }
  FUN_140041b80(local_198,&local_1e8);
  local_140 = local_198;
  FUN_140e609c0(param_1);
  ppplVar7 = &local_150;
  uVar23 = CONCAT44(uVar21,DAT_141a00c58);
  puVar13 = (undefined8 *)FUN_140e634e0(param_1,param_2,&local_1c8,3,uVar23,ppplVar7);
  if (puVar13 != puVar9) {
    local_1e8 = (longlong *)*puVar13;
    uStack_1e0 = *(undefined4 *)(puVar13 + 1);
    uStack_1dc = *(undefined4 *)((longlong)puVar13 + 0xc);
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar9 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar9);
    }
    FUN_140041b80(puVar9,&local_1e8);
  }
  FUN_140e60910(1);
  local_158 = 0x1f;
  uStack_1dc = 0;
  local_1e8 = (longlong *)0x3fdccccccccccccd;
  iVar3 = FUN_140e851f0(pplVar10,&local_1e8,DAT_141955260,1);
  if ((1 << ((byte)uStack_1dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1e8);
  }
  if (iVar3 != -2 && iVar3 < 1) {
    local_158 = 0x21;
    if ((1 << ((byte)local_1bc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1c8);
    }
    local_1c8 = 0;
    local_1c0 = 0;
    local_1bc = 5;
    if ((1 << ((byte)local_16c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_178);
    }
    local_178 = 0;
    local_170 = 0;
    local_16c = 5;
    (**(code **)(*param_1 + 8))(param_1,DAT_141a0a748);
    uVar20 = (ulonglong)ppplVar7 & 0xffffffffffffff00;
    uVar23 = uVar23 & 0xffffffffffffff00;
    FUN_140e87440(uVar5,DAT_1419ef438,0x80000000,&local_88,uVar23,uVar20);
    uStack_1dc = 6;
    uVar23 = uVar23 & 0xffffffffffffff00;
    local_1e8 = param_1;
    FUN_140e87440(&local_1e8,DAT_141a0a828,0x80000000,&local_98,uVar23,uVar20 & 0xffffffffffffff00);
    uVar21 = (undefined4)(uVar23 >> 0x20);
    if ((1 << ((byte)uStack_1dc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1e8);
    }
    FUN_140e609c0(DAT_141a729d8);
    FUN_140e645a0(&local_1d8,gml_Object_oLifeSteal_Step_0,0);
    if (&local_1d8 != pplVar6) {
      local_1e8 = local_1d8;
      uStack_1e0 = uStack_1d0;
      uStack_1dc = uStack_1cc;
      if ((1 << ((byte)*(undefined4 *)((longlong)pplVar6 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(pplVar6);
      }
      FUN_140041b80(pplVar6,&local_1e8);
    }
    FUN_140e60910(1);
    if (pplVar6 != &local_1b8) {
      local_1e8 = *pplVar6;
      uStack_1e0 = *(undefined4 *)(pplVar6 + 1);
      uStack_1dc = *(undefined4 *)((longlong)pplVar6 + 0xc);
      if ((1 << (local_1ac & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_1b8);
      }
      FUN_140041b80(&local_1b8,&local_1e8);
    }
    if ((1 << ((byte)uStack_1cc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1d8);
    }
    local_150 = &local_1b8;
    local_1e8 = (longlong *)local_98;
    uStack_1e0 = uStack_90;
    uStack_1dc = uStack_8c;
    if ((1 << (local_19c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_1a8);
    }
    FUN_140041b80(local_1a8,&local_1e8);
    local_148 = local_1a8;
    local_1e8 = (longlong *)local_88;
    uStack_1e0 = uStack_80;
    uStack_1dc = uStack_7c;
    if ((1 << (local_18c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_198);
    }
    FUN_140041b80(local_198,&local_1e8);
    local_140 = local_198;
    puVar9 = (undefined8 *)
             FUN_140e634e0(param_1,param_2,&local_178,2,CONCAT44(uVar21,DAT_1419fd6d8),&local_150);
    if (puVar9 != &local_188) {
      local_1e8 = (longlong *)*puVar9;
      uStack_1e0 = *(undefined4 *)(puVar9 + 1);
      uStack_1dc = *(undefined4 *)((longlong)puVar9 + 0xc);
      if ((1 << (local_17c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_188);
      }
      FUN_140041b80(&local_188,&local_1e8);
    }
    local_138 = &local_188;
    gml_Script___remove_listener_from_signal_anon_1472_SignalController_SIGNALS
              (param_1,param_2,&local_1c8,2,&local_140);
    local_158 = 0x22;
    FUN_140edd0e0(param_1,param_2,0,0);
  }
  local_158 = 0x25;
  uVar5 = (**(code **)(*param_1 + 0x10))(param_1,DAT_141a0a848);
  FUN_140e609c0(param_1);
  FUN_1400460e0(uVar5,uVar4);
  FUN_140e60910(1);
  if ((1 << ((byte)local_16c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_178);
  }
  if ((1 << ((byte)local_1bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1c8);
  }
  if ((1 << ((byte)uStack_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_98);
  }
  if ((1 << ((byte)uStack_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_88);
  }
  if ((1 << ((byte)uStack_6c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_78);
  }
  if ((1 << ((byte)local_ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f8);
  }
  if ((1 << ((byte)local_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e8);
  }
  if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d8);
  }
  if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  if ((1 << ((byte)local_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b8);
  }
  if ((1 << ((byte)local_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a8);
  }
  if ((1 << ((byte)local_fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_108);
  }
  if ((1 << ((byte)uStack_11c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_128);
  }
  _eh_vector_destructor_iterator_(&local_1b8,0x10,4,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_168;
  return;
}

