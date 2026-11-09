// gml_Object_oThrowingLance_Alarm_0 @ 0x140db0910

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void gml_Object_oThrowingLance_Alarm_0(longlong *param_1,undefined8 param_2)

{
  char cVar1;
  byte bVar2;
  double *pdVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  double dVar8;
  double dVar9;
  undefined4 uVar11;
  ulonglong uVar10;
  undefined8 **ppuVar12;
  ulonglong uVar13;
  undefined4 uVar14;
  undefined8 local_1d8;
  undefined4 uStack_1d0;
  undefined4 uStack_1cc;
  undefined8 local_1c8;
  undefined4 local_1c0;
  undefined4 local_1bc;
  undefined8 local_1b8;
  char *local_1b0;
  undefined4 local_1a8;
  undefined8 local_1a0;
  undefined4 local_198;
  undefined4 local_194;
  double local_190;
  uint local_184;
  double local_180;
  uint local_174;
  undefined8 local_170;
  undefined4 local_164;
  undefined8 local_160;
  undefined4 local_154;
  double local_148;
  byte local_13c;
  undefined8 local_138;
  byte local_12c;
  undefined1 local_128 [12];
  byte local_11c;
  undefined8 local_118;
  byte local_10c;
  undefined8 local_108;
  byte local_fc;
  undefined8 local_f8;
  byte local_ec;
  undefined1 local_e8 [12];
  byte local_dc;
  undefined1 local_d8 [12];
  byte local_cc;
  undefined8 local_c8;
  undefined4 local_bc;
  undefined8 local_b8;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined8 local_a8;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined8 local_98;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined8 local_88;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  double *local_78;
  undefined8 *local_70;
  undefined1 *local_68;
  undefined8 *local_60;
  undefined8 *local_58;
  undefined8 *local_50;
  undefined1 *local_48;
  undefined1 *local_40;
  
  local_1b0 = "gml_Object_oTest_Draw_0";
  local_1a8 = 0;
  local_1b8 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_1b8;
  uVar11 = 1;
  _eh_vector_constructor_iterator_(&local_148,0x10,8,FUN_1400424d0,FUN_140041b30);
  local_bc = 0xffffff;
  local_c8 = 0;
  uStack_7c = 0xffffff;
  local_88 = 0;
  local_154 = 0xffffff;
  local_160 = 0;
  uStack_8c = 0xffffff;
  local_98 = 0;
  local_164 = 0xffffff;
  local_170 = 0;
  local_174 = 0xffffff;
  local_180 = 0.0;
  local_184 = 0xffffff;
  local_190 = 0.0;
  uStack_9c = 0xffffff;
  local_a8 = 0;
  uStack_ac = 0xffffff;
  local_b8 = 0;
  local_1bc = 0xffffff;
  local_1c8 = 0;
  local_194 = 0xffffff;
  local_1a0 = 0;
  local_1a8 = 2;
  pdVar3 = (double *)(**(code **)(*param_1 + 8))(param_1,DAT_141a01598);
  if (pdVar3 != &local_148) {
    local_1d8 = (longlong *)*pdVar3;
    uStack_1d0 = *(undefined4 *)(pdVar3 + 1);
    uStack_1cc = *(undefined4 *)((longlong)pdVar3 + 0xc);
    if ((1 << (local_13c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_148);
    }
    FUN_140041b80(&local_148,&local_1d8);
  }
  local_78 = &local_148;
  ppuVar12 = &local_78;
  uVar10 = CONCAT44(uVar11,DAT_141a04798);
  uVar4 = FUN_140e634e0(param_1,param_2,&local_1c8,1,uVar10,ppuVar12);
  cVar1 = FUN_140e491e0(uVar4);
  if (cVar1 == '\0') {
    local_1a8 = 3;
    if ((1 << ((byte)local_194 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1a0);
    }
    uVar11 = (undefined4)(uVar10 >> 0x20);
    local_1a0 = 0;
    local_198 = 0;
    local_194 = 5;
    puVar5 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a01598);
    local_1d8 = (longlong *)CONCAT44(uRam00000001419ee074,_DAT_1419ee070);
    uStack_1d0 = uRam00000001419ee078;
    uStack_1cc = uRam00000001419ee07c;
    if ((1 << (local_12c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_138);
    }
    FUN_140041b80(&local_138,&local_1d8);
    local_70 = &local_138;
    local_1d8 = (longlong *)CONCAT44(uRam00000001419ee074,_DAT_1419ee070);
    uStack_1d0 = uRam00000001419ee078;
    uStack_1cc = uRam00000001419ee07c;
    if ((1 << (local_11c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_128);
    }
    FUN_140041b80(local_128,&local_1d8);
    local_68 = local_128;
    FUN_140e609c0(param_1);
    ppuVar12 = &local_70;
    uVar10 = CONCAT44(uVar11,DAT_141a04a78);
    puVar6 = (undefined8 *)FUN_140e634e0(param_1,param_2,&local_1a0,2,uVar10,ppuVar12);
    if (puVar6 != puVar5) {
      local_1d8 = (longlong *)*puVar6;
      uStack_1d0 = *(undefined4 *)(puVar6 + 1);
      uStack_1cc = *(undefined4 *)((longlong)puVar6 + 0xc);
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar5 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar5);
      }
      FUN_140041b80(puVar5,&local_1d8);
    }
    FUN_140e60910(1);
  }
  local_1a8 = 5;
  uStack_1cc = 6;
  uVar10 = uVar10 & 0xffffffffffffff00;
  local_1d8 = param_1;
  FUN_140e87440(&local_1d8,DAT_141a0a778,0x80000000,&local_c8,uVar10,
                (ulonglong)ppuVar12 & 0xffffffffffffff00);
  uVar11 = (undefined4)(uVar10 >> 0x20);
  if ((1 << ((byte)uStack_1cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1d8);
  }
  FUN_140162d40(&local_c8,3);
  FUN_140e86fa0(param_1,DAT_141a0a778,0x80000000,&local_c8);
  local_1a8 = 7;
  FUN_140e85f80(param_1,DAT_1419eece8,0x80000000,&local_88);
  local_1d8 = (longlong *)local_88;
  uStack_1d0 = uStack_80;
  uStack_1cc = uStack_7c;
  if ((1 << ((byte)local_154 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_160);
  }
  FUN_140041b80(&local_160,&local_1d8);
  FUN_140e86fa0(param_1,DAT_1419fe0e8,0x80000000,&local_160);
  local_1a8 = 8;
  FUN_140e85f80(param_1,DAT_1419eecd8,0x80000000,&local_98);
  local_1d8 = (longlong *)local_98;
  uStack_1d0 = uStack_90;
  uStack_1cc = uStack_8c;
  if ((1 << ((byte)local_164 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_170);
  }
  FUN_140041b80(&local_170,&local_1d8);
  FUN_140e86fa0(param_1,DAT_1419fe158,0x80000000,&local_170);
  local_1a8 = 10;
  uVar4 = (**(code **)(*param_1 + 0x10))(param_1,DAT_141a01588);
  bVar2 = FUN_140eab100(0x20);
  FUN_140162d40(uVar4,(uint)bVar2 * 5);
  local_1a8 = 0xb;
  puVar5 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a0a748);
  if ((1 << ((byte)*(undefined4 *)((longlong)puVar5 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(puVar5);
  }
  *(undefined4 *)((longlong)puVar5 + 0xc) = 0;
  *puVar5 = 0x4000000000000000;
  local_1a8 = 0xd;
  puVar5 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a0a858);
  if ((1 << ((byte)*(undefined4 *)((longlong)puVar5 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(puVar5);
  }
  *(undefined4 *)((longlong)puVar5 + 0xc) = 0;
  *puVar5 = 0x3fe0000000000000;
  local_1a8 = 0xf;
  if ((*(uint *)((longlong)pdVar3 + 0xc) & 0xffffff) == 0) {
    dVar8 = *pdVar3;
  }
  else {
    dVar8 = (double)FUN_140e4b060(pdVar3);
  }
  FUN_140ec60c0((longlong)dVar8,0xffffffff);
  local_1a8 = 0x10;
  if ((1 << ((byte)local_1bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1c8);
  }
  local_1c8 = 0;
  local_1c0 = 0;
  local_1bc = 5;
  local_1d8 = (longlong *)CONCAT44(uRam0000000141dc7804,_DAT_141dc7800);
  uStack_1d0 = uRam0000000141dc7808;
  uStack_1cc = uRam0000000141dc780c;
  if ((1 << (local_13c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_148);
  }
  FUN_140041b80(&local_148,&local_1d8);
  local_78 = &local_148;
  local_1d8 = (longlong *)CONCAT44(uRam0000000141dc7804,_DAT_141dc7800);
  uStack_1d0 = uRam0000000141dc7808;
  uStack_1cc = uRam0000000141dc780c;
  if ((1 << (local_12c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_138);
  }
  FUN_140041b80(&local_138,&local_1d8);
  local_70 = &local_138;
  ppuVar12 = &local_78;
  uVar10 = CONCAT44(uVar11,DAT_141a04558);
  FUN_140e634e0(param_1,param_2,&local_1c8,2,uVar10,ppuVar12);
  local_1a8 = 0x11;
  uStack_1cc = 6;
  uVar13 = (ulonglong)ppuVar12 & 0xffffffffffffff00;
  uVar10 = uVar10 & 0xffffffffffffff00;
  local_1d8 = param_1;
  FUN_140e87440(&local_1d8,DAT_141a0a728,0x80000000,&local_180,uVar10,uVar13);
  if ((1 << ((byte)uStack_1cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1d8);
  }
  uStack_1cc = 6;
  uVar13 = uVar13 & 0xffffffffffffff00;
  uVar10 = uVar10 & 0xffffffffffffff00;
  local_1d8 = param_1;
  FUN_140e87440(&local_1d8,DAT_141a0a778,0x80000000,&local_190,uVar10,uVar13);
  uVar11 = (undefined4)(uVar10 >> 0x20);
  uVar14 = (undefined4)(uVar13 >> 0x20);
  if ((1 << ((byte)uStack_1cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1d8);
  }
  dVar8 = local_190;
  if ((local_184 & 0xffffff) != 0) {
    dVar8 = (double)FUN_140e4b060(&local_190);
  }
  dVar9 = local_180;
  if ((local_174 & 0xffffff) != 0) {
    dVar9 = (double)FUN_140e4b060(&local_180);
  }
  uVar13 = CONCAT44(uVar14,0x3f800000);
  uVar10 = CONCAT44(uVar11,0x41500000);
  FUN_140ec5dd0(param_1,(longlong)dVar9,0,0x41500000,uVar10,uVar13,0x3f800000,(float)dVar8,0xffffff,
                0x3f800000);
  local_1a8 = 0x13;
  FUN_140ec7870();
  local_1a8 = 0x15;
  if ((1 << ((byte)local_1bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1c8);
  }
  local_1c8 = 0;
  local_1c0 = 0;
  local_1bc = 5;
  puVar5 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_141a0a748);
  puVar6 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_141a0a858);
  puVar7 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_141a01588);
  uStack_1cc = 6;
  uVar13 = uVar13 & 0xffffffffffffff00;
  uVar10 = uVar10 & 0xffffffffffffff00;
  local_1d8 = param_1;
  FUN_140e87440(&local_1d8,DAT_1419fe0e8,0x80000000,&local_a8,uVar10,uVar13);
  if ((1 << ((byte)uStack_1cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1d8);
  }
  uStack_1cc = 6;
  uVar10 = uVar10 & 0xffffffffffffff00;
  local_1d8 = param_1;
  FUN_140e87440(&local_1d8,DAT_1419fe158,0x80000000,&local_b8,uVar10,uVar13 & 0xffffffffffffff00);
  uVar11 = (undefined4)(uVar10 >> 0x20);
  if ((1 << ((byte)uStack_1cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1d8);
  }
  if (pdVar3 != &local_148) {
    local_1d8 = (longlong *)*pdVar3;
    uStack_1d0 = *(undefined4 *)(pdVar3 + 1);
    uStack_1cc = *(undefined4 *)((longlong)pdVar3 + 0xc);
    if ((1 << (local_13c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_148);
    }
    FUN_140041b80(&local_148,&local_1d8);
  }
  local_78 = &local_148;
  local_1d8 = (longlong *)local_a8;
  uStack_1d0 = uStack_a0;
  uStack_1cc = uStack_9c;
  if ((1 << (local_12c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_138);
  }
  FUN_140041b80(&local_138,&local_1d8);
  local_70 = &local_138;
  local_1d8 = (longlong *)local_b8;
  uStack_1d0 = uStack_b0;
  uStack_1cc = uStack_ac;
  if ((1 << (local_11c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_128);
  }
  FUN_140041b80(local_128,&local_1d8);
  local_68 = local_128;
  if (puVar5 != &local_118) {
    local_1d8 = (longlong *)*puVar5;
    uStack_1d0 = *(undefined4 *)(puVar5 + 1);
    uStack_1cc = *(undefined4 *)((longlong)puVar5 + 0xc);
    if ((1 << (local_10c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_118);
    }
    FUN_140041b80(&local_118,&local_1d8);
  }
  local_60 = &local_118;
  if (puVar6 != &local_108) {
    local_1d8 = (longlong *)*puVar6;
    uStack_1d0 = *(undefined4 *)(puVar6 + 1);
    uStack_1cc = *(undefined4 *)((longlong)puVar6 + 0xc);
    if ((1 << (local_fc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_108);
    }
    FUN_140041b80(&local_108,&local_1d8);
  }
  local_58 = &local_108;
  if (puVar7 != &local_f8) {
    local_1d8 = (longlong *)*puVar7;
    uStack_1d0 = *(undefined4 *)(puVar7 + 1);
    uStack_1cc = *(undefined4 *)((longlong)puVar7 + 0xc);
    if ((1 << (local_ec & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_f8);
    }
    FUN_140041b80(&local_f8,&local_1d8);
  }
  local_50 = &local_f8;
  local_1d8 = (longlong *)CONCAT44(uRam00000001419ee064,_DAT_1419ee060);
  uStack_1d0 = uRam00000001419ee068;
  uStack_1cc = uRam00000001419ee06c;
  if ((1 << (local_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_e8);
  }
  FUN_140041b80(local_e8,&local_1d8);
  local_48 = local_e8;
  local_1d8 = (longlong *)CONCAT44(uRam00000001419ee054,_DAT_1419ee050);
  uStack_1d0 = uRam00000001419ee058;
  uStack_1cc = uRam00000001419ee05c;
  if ((1 << (local_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_d8);
  }
  FUN_140041b80(local_d8,&local_1d8);
  local_40 = local_d8;
  FUN_140e634e0(param_1,param_2,&local_1c8,8,CONCAT44(uVar11,DAT_141a04498),&local_78);
  if ((1 << ((byte)local_194 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1a0);
  }
  if ((1 << ((byte)local_1bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1c8);
  }
  if ((1 << ((byte)uStack_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b8);
  }
  if ((1 << ((byte)uStack_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a8);
  }
  if ((1 << ((byte)local_184 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_190);
  }
  if ((1 << ((byte)local_174 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_180);
  }
  if ((1 << ((byte)local_164 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_170);
  }
  if ((1 << ((byte)uStack_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_98);
  }
  if ((1 << ((byte)local_154 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_160);
  }
  if ((1 << ((byte)uStack_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_88);
  }
  if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  _eh_vector_destructor_iterator_(&local_148,0x10,8,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_1b8;
  return;
}

