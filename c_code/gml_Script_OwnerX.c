// gml_Script_OwnerX @ 0x1402744f0

undefined8 *
gml_Script_OwnerX(longlong *param_1,undefined8 param_2,undefined8 *param_3,undefined4 param_4,
                 undefined8 param_5)

{
  char cVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  double *pdVar6;
  ulonglong uVar7;
  undefined8 *puVar8;
  float fVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  undefined4 uVar15;
  ulonglong uVar14;
  undefined8 **ppuVar16;
  ulonglong uVar17;
  undefined8 local_1c8;
  undefined4 uStack_1c0;
  undefined4 uStack_1bc;
  undefined4 local_1b8;
  undefined4 uStack_1b4;
  undefined4 uStack_1b0;
  undefined4 uStack_1ac;
  undefined8 local_1a8;
  undefined4 local_1a0;
  undefined4 local_19c;
  undefined8 local_198;
  char *local_190;
  undefined4 local_188;
  double local_180;
  uint local_174;
  double local_170;
  uint local_164;
  undefined8 local_160;
  undefined4 local_154;
  undefined8 local_150;
  undefined4 local_144;
  double local_140;
  uint local_134;
  double local_130;
  uint local_124;
  double local_120;
  uint local_114;
  double local_110;
  uint local_104;
  uint local_100 [2];
  undefined8 *local_f8;
  undefined8 local_e8;
  byte local_dc;
  undefined8 *local_88 [12];
  
  local_190 = "gml_Script_DamagePacket";
  local_198 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_198;
  local_188 = 2;
  FUN_140041df0(local_100,param_4,6,param_5);
  uVar15 = 1;
  _eh_vector_constructor_iterator_(&local_e8,0x10,6,FUN_1400424d0,FUN_140041b30);
  local_144 = 0xffffff;
  local_150 = 0;
  local_154 = 0xffffff;
  local_160 = 0;
  local_164 = 0xffffff;
  local_170 = 0.0;
  local_174 = 0xffffff;
  local_180 = 0.0;
  local_104 = 0xffffff;
  local_110 = 0.0;
  local_114 = 0xffffff;
  local_120 = 0.0;
  local_124 = 0xffffff;
  local_130 = 0.0;
  local_134 = 0xffffff;
  local_140 = 0.0;
  local_19c = 0;
  local_1a8 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  if ((*(int *)(*(longlong *)ThreadLocalStoragePointer + 0x18) < DAT_141dddd28) &&
     (_Init_thread_header(&DAT_141dddd28), DAT_141dddd28 == -1)) {
    DAT_141dddd30 = FUN_140e63aa0(DAT_141a575a0);
    _Init_thread_footer(&DAT_141dddd28);
  }
  local_188 = 2;
  puVar8 = &DAT_1419df7b0;
  uVar7 = (ulonglong)local_100[0];
  if ((int)local_100[0] < 6) {
    puVar3 = &DAT_1419df7b0;
  }
  else {
    puVar3 = (undefined8 *)local_f8[5];
  }
  iVar2 = FUN_140e851f0(puVar3,&DAT_1419df7b0,DAT_141955260,0);
  if (iVar2 == 0) {
    local_188 = 2;
    FUN_140e645a0(&local_1c8,&LAB_1402744c0,param_1);
    if ((int)local_100[0] < 6) {
      puVar3 = &DAT_1419df7b0;
LAB_1402746d5:
      local_1b8 = (undefined4)local_1c8;
      uStack_1b4 = local_1c8._4_4_;
      uStack_1b0 = uStack_1c0;
      uStack_1ac = uStack_1bc;
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar3 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar3);
      }
      FUN_140041b80(puVar3,&local_1b8);
    }
    else {
      puVar3 = (undefined8 *)local_f8[5];
      if (&local_1c8 != puVar3) goto LAB_1402746d5;
    }
    if ((1 << ((byte)uStack_1bc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1c8);
    }
  }
  FUN_140e643a0(param_1,DAT_141dddd30);
  local_188 = 4;
  if ((int)local_100[0] < 1) {
    puVar3 = &DAT_1419df7b0;
LAB_140274751:
    local_1b8 = *(undefined4 *)puVar3;
    uStack_1b4 = *(undefined4 *)((longlong)puVar3 + 4);
    uStack_1b0 = *(undefined4 *)(puVar3 + 1);
    uStack_1ac = *(undefined4 *)((longlong)puVar3 + 0xc);
    if ((1 << ((byte)local_144 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_150);
    }
    FUN_140041b80(&local_150,&local_1b8);
  }
  else {
    puVar3 = (undefined8 *)*local_f8;
    if (puVar3 != &local_150) goto LAB_140274751;
  }
  FUN_140e86fa0(param_1,DAT_1419fe0e8,0x80000000,&local_150);
  local_188 = 5;
  if ((int)local_100[0] < 2) {
    puVar3 = &DAT_1419df7b0;
LAB_1402747b9:
    local_1b8 = *(undefined4 *)puVar3;
    uStack_1b4 = *(undefined4 *)((longlong)puVar3 + 4);
    uStack_1b0 = *(undefined4 *)(puVar3 + 1);
    uStack_1ac = *(undefined4 *)((longlong)puVar3 + 0xc);
    if ((1 << ((byte)local_154 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_160);
    }
    FUN_140041b80(&local_160,&local_1b8);
  }
  else {
    puVar3 = (undefined8 *)local_f8[1];
    if (puVar3 != &local_160) goto LAB_1402747b9;
  }
  FUN_140e86fa0(param_1,DAT_1419fe158,0x80000000,&local_160);
  local_188 = 7;
  puVar3 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a1f4e0);
  FUN_140e609c0(param_1);
  if ((int)local_100[0] < 3) {
    puVar4 = &DAT_1419df7b0;
  }
  else {
    puVar4 = (undefined8 *)local_f8[2];
  }
  if (puVar4 != puVar3) {
    local_1b8 = *(undefined4 *)puVar4;
    uStack_1b4 = *(undefined4 *)((longlong)puVar4 + 4);
    uStack_1b0 = *(undefined4 *)(puVar4 + 1);
    uStack_1ac = *(undefined4 *)((longlong)puVar4 + 0xc);
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar3 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar3);
    }
    FUN_140041b80(puVar3,&local_1b8);
  }
  FUN_140e60910(1);
  local_188 = 8;
  puVar3 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a1f440);
  FUN_140e609c0(param_1);
  if ((int)local_100[0] < 4) {
    puVar4 = &DAT_1419df7b0;
  }
  else {
    puVar4 = (undefined8 *)local_f8[3];
  }
  if (puVar4 != puVar3) {
    local_1b8 = *(undefined4 *)puVar4;
    uStack_1b4 = *(undefined4 *)((longlong)puVar4 + 4);
    uStack_1b0 = *(undefined4 *)(puVar4 + 1);
    uStack_1ac = *(undefined4 *)((longlong)puVar4 + 0xc);
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar3 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar3);
    }
    FUN_140041b80(puVar3,&local_1b8);
  }
  FUN_140e60910(1);
  local_188 = 10;
  puVar3 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a0a7d8);
  FUN_140e609c0(param_1);
  if ((int)local_100[0] < 5) {
    puVar4 = &DAT_1419df7b0;
  }
  else {
    puVar4 = (undefined8 *)local_f8[4];
  }
  if (puVar4 != puVar3) {
    local_1b8 = *(undefined4 *)puVar4;
    uStack_1b4 = *(undefined4 *)((longlong)puVar4 + 4);
    uStack_1b0 = *(undefined4 *)(puVar4 + 1);
    uStack_1ac = *(undefined4 *)((longlong)puVar4 + 0xc);
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar3 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar3);
    }
    FUN_140041b80(puVar3,&local_1b8);
  }
  FUN_140e60910(1);
  local_188 = 0xb;
  puVar3 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a57370);
  FUN_140e609c0(param_1);
  if ((int)local_100[0] < 6) {
    puVar4 = &DAT_1419df7b0;
  }
  else {
    puVar4 = (undefined8 *)local_f8[5];
  }
  if (puVar4 != puVar3) {
    local_1b8 = *(undefined4 *)puVar4;
    uStack_1b4 = *(undefined4 *)((longlong)puVar4 + 4);
    uStack_1b0 = *(undefined4 *)(puVar4 + 1);
    uStack_1ac = *(undefined4 *)((longlong)puVar4 + 0xc);
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar3 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar3);
    }
    FUN_140041b80(puVar3,&local_1b8);
  }
  FUN_140e60910(1);
  local_188 = 0xd;
  puVar3 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a573b0);
  uStack_1bc = 0xd;
  local_1c8 = (longlong *)0x0;
  if (&local_1c8 != puVar3) {
    local_1b8 = 0;
    uStack_1b4 = 0;
    uStack_1b0 = uStack_1c0;
    uStack_1ac = 0xd;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar3 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar3);
    }
    FUN_140041b80(puVar3,&local_1b8);
  }
  local_188 = 0xe;
  puVar3 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a57430);
  uStack_1bc = 0xd;
  local_1c8 = (longlong *)0x3ff0000000000000;
  if (&local_1c8 != puVar3) {
    local_1b8 = 0;
    uStack_1b4 = 0x3ff00000;
    uStack_1b0 = uStack_1c0;
    uStack_1ac = 0xd;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar3 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar3);
    }
    FUN_140041b80(puVar3,&local_1b8);
  }
  local_188 = 0xf;
  puVar3 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a575d0);
  uStack_1bc = 0xd;
  local_1c8 = (longlong *)0x0;
  if (&local_1c8 != puVar3) {
    local_1b8 = 0;
    uStack_1b4 = 0;
    uStack_1b0 = uStack_1c0;
    uStack_1ac = 0xd;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar3 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar3);
    }
    FUN_140041b80(puVar3,&local_1b8);
  }
  local_188 = 0x10;
  puVar3 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a57570);
  uStack_1bc = 0xd;
  local_1c8 = (longlong *)0x0;
  if (&local_1c8 != puVar3) {
    local_1b8 = 0;
    uStack_1b4 = 0;
    uStack_1b0 = uStack_1c0;
    uStack_1ac = 0xd;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar3 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar3);
    }
    FUN_140041b80(puVar3,&local_1b8);
  }
  local_188 = 0x11;
  puVar3 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a57520);
  uStack_1bc = 0xd;
  local_1c8 = (longlong *)0x0;
  if (&local_1c8 != puVar3) {
    local_1b8 = 0;
    uStack_1b4 = 0;
    uStack_1b0 = uStack_1c0;
    uStack_1ac = 0xd;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar3 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar3);
    }
    FUN_140041b80(puVar3,&local_1b8);
  }
  local_188 = 0x13;
  if ((1 << ((byte)local_19c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1a8);
  }
  local_1a8 = 0;
  local_1a0 = 0;
  local_19c = 5;
  if ((int)local_100[0] < 4) {
    puVar3 = &DAT_1419df7b0;
LAB_140274c04:
    local_1b8 = *(undefined4 *)puVar3;
    uStack_1b4 = *(undefined4 *)((longlong)puVar3 + 4);
    uStack_1b0 = *(undefined4 *)(puVar3 + 1);
    uStack_1ac = *(undefined4 *)((longlong)puVar3 + 0xc);
    if ((1 << (local_dc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_e8);
    }
    FUN_140041b80(&local_e8,&local_1b8);
  }
  else {
    puVar3 = (undefined8 *)local_f8[3];
    if (puVar3 != &local_e8) goto LAB_140274c04;
  }
  local_88[0] = &local_e8;
  ppuVar16 = local_88;
  uVar14 = CONCAT44(uVar15,DAT_141a02ef8);
  uVar5 = FUN_140e634e0(param_1,param_2,&local_1a8,1,uVar14,ppuVar16);
  cVar1 = FUN_140e491e0(uVar5);
  if (cVar1 != '\0') {
    local_188 = 0x14;
    pdVar6 = (double *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a572c0);
    uStack_1bc = 6;
    uVar17 = (ulonglong)ppuVar16 & 0xffffffffffffff00;
    uVar14 = uVar14 & 0xffffffffffffff00;
    local_1c8 = param_1;
    FUN_140e87440(&local_1c8,DAT_1419fe0e8,0x80000000,&local_170,uVar14,uVar17);
    if ((1 << ((byte)uStack_1bc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1c8);
    }
    uStack_1bc = 6;
    local_1c8 = param_1;
    FUN_140e87440(&local_1c8,DAT_1419fe158,0x80000000,&local_180,uVar14 & 0xffffffffffffff00,
                  uVar17 & 0xffffffffffffff00);
    if ((1 << ((byte)uStack_1bc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1c8);
    }
    if ((int)local_100[0] < 4) {
      puVar3 = &DAT_1419df7b0;
    }
    else {
      puVar3 = (undefined8 *)local_f8[3];
    }
    FUN_140e87170(puVar3,DAT_1419fe0e8,0x80000000,&local_110,param_1,param_2);
    if (3 < (int)local_100[0]) {
      puVar8 = (undefined8 *)local_f8[3];
    }
    FUN_140e87170(puVar8,DAT_1419fe158,0x80000000,&local_120,param_1,param_2);
    dVar10 = local_120;
    if ((local_114 & 0xffffff) != 0) {
      dVar10 = (double)FUN_140e4b060(&local_120);
    }
    dVar11 = local_110;
    if ((local_104 & 0xffffff) != 0) {
      dVar11 = (double)FUN_140e4b060(&local_110);
    }
    dVar12 = local_180;
    if ((local_174 & 0xffffff) != 0) {
      dVar12 = (double)FUN_140e4b060(&local_180);
    }
    dVar13 = local_170;
    if ((local_164 & 0xffffff) != 0) {
      dVar13 = (double)FUN_140e4b060(&local_170);
    }
    fVar9 = (float)FUN_140e793d0((float)dVar13,(float)dVar12,(float)dVar11,(float)dVar10);
    if ((1 << ((byte)*(undefined4 *)((longlong)pdVar6 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(pdVar6);
    }
    *(undefined4 *)((longlong)pdVar6 + 0xc) = 0;
    *pdVar6 = (double)fVar9;
    goto LAB_140275128;
  }
  local_188 = 0x15;
  if ((1 << ((byte)local_19c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1a8);
  }
  uVar15 = (undefined4)(uVar14 >> 0x20);
  local_1a8 = 0;
  local_1a0 = 0;
  local_19c = 5;
  if ((int)local_100[0] < 3) {
    puVar3 = &DAT_1419df7b0;
LAB_140274e98:
    local_1b8 = *(undefined4 *)puVar3;
    uStack_1b4 = *(undefined4 *)((longlong)puVar3 + 4);
    uStack_1b0 = *(undefined4 *)(puVar3 + 1);
    uStack_1ac = *(undefined4 *)((longlong)puVar3 + 0xc);
    if ((1 << (local_dc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_e8);
    }
    FUN_140041b80(&local_e8,&local_1b8);
  }
  else {
    puVar3 = (undefined8 *)local_f8[2];
    if (puVar3 != &local_e8) goto LAB_140274e98;
  }
  local_88[0] = &local_e8;
  ppuVar16 = local_88;
  uVar14 = CONCAT44(uVar15,DAT_141a02ef8);
  uVar5 = FUN_140e634e0(param_1,param_2,&local_1a8,1,uVar14,ppuVar16);
  cVar1 = FUN_140e491e0(uVar5);
  if (cVar1 == '\0') {
    local_188 = 0x18;
    puVar8 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a572c0);
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar8 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar8);
    }
    *(undefined4 *)((longlong)puVar8 + 0xc) = 0;
    *puVar8 = 0;
  }
  else {
    local_188 = 0x16;
    pdVar6 = (double *)(**(code **)(*param_1 + 0x10))();
    uStack_1bc = 6;
    uVar17 = (ulonglong)ppuVar16 & 0xffffffffffffff00;
    uVar14 = uVar14 & 0xffffffffffffff00;
    local_1c8 = param_1;
    FUN_140e87440(&local_1c8,DAT_1419fe0e8,0x80000000,&local_170,uVar14,uVar17);
    if ((1 << ((byte)uStack_1bc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1c8);
    }
    uStack_1bc = 6;
    local_1c8 = param_1;
    FUN_140e87440(&local_1c8,DAT_1419fe158,0x80000000,&local_180,uVar14 & 0xffffffffffffff00,
                  uVar17 & 0xffffffffffffff00);
    if ((1 << ((byte)uStack_1bc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1c8);
    }
    if ((int)local_100[0] < 3) {
      puVar3 = &DAT_1419df7b0;
    }
    else {
      puVar3 = (undefined8 *)local_f8[2];
    }
    FUN_140e87170(puVar3,DAT_1419fe0e8,0x80000000,&local_130,param_1,param_2);
    if (2 < (int)local_100[0]) {
      puVar8 = (undefined8 *)local_f8[2];
    }
    FUN_140e87170(puVar8,DAT_1419fe158,0x80000000,&local_140,param_1,param_2);
    FUN_140e609c0(param_1);
    dVar10 = local_140;
    if ((local_134 & 0xffffff) != 0) {
      dVar10 = (double)FUN_140e4b060(&local_140);
    }
    dVar11 = local_130;
    if ((local_124 & 0xffffff) != 0) {
      dVar11 = (double)FUN_140e4b060(&local_130);
    }
    dVar12 = local_180;
    if ((local_174 & 0xffffff) != 0) {
      dVar12 = (double)FUN_140e4b060(&local_180);
    }
    dVar13 = local_170;
    if ((local_164 & 0xffffff) != 0) {
      dVar13 = (double)FUN_140e4b060(&local_170);
    }
    fVar9 = (float)FUN_140e793d0((float)dVar13,(float)dVar12,(float)dVar11,(float)dVar10);
    if ((1 << ((byte)*(undefined4 *)((longlong)pdVar6 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(pdVar6);
    }
    *(undefined4 *)((longlong)pdVar6 + 0xc) = 0;
    *pdVar6 = (double)(fVar9 + 180.0);
    FUN_140e60910(1);
  }
LAB_140275128:
  if ((1 << ((byte)local_19c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1a8);
  }
  if ((1 << ((byte)local_134 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_140);
  }
  if ((1 << ((byte)local_124 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_130);
  }
  if ((1 << ((byte)local_114 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_120);
  }
  if ((1 << ((byte)local_104 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_110);
  }
  if ((1 << ((byte)local_174 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_180);
  }
  if ((1 << ((byte)local_164 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_170);
  }
  if ((1 << ((byte)local_154 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_160);
  }
  if ((1 << ((byte)local_144 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_150);
  }
  _eh_vector_destructor_iterator_(&local_e8,0x10,6,FUN_140041b30);
  if (0 < (int)local_100[0]) {
    puVar8 = local_f8;
    do {
      puVar3 = (undefined8 *)*puVar8;
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar3 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar3);
      }
      *puVar3 = 0;
      *(undefined4 *)(puVar3 + 1) = 0;
      *(undefined4 *)((longlong)puVar3 + 0xc) = 5;
      puVar8 = puVar8 + 1;
      uVar7 = uVar7 - 1;
    } while (uVar7 != 0);
  }
  FUN_140e4cd60(local_f8);
  DAT_141dc7a50 = (undefined8 *)local_198;
  return param_3;
}

