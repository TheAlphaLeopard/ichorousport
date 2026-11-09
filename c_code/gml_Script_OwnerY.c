// gml_Script_OwnerY @ 0x1402752d0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
gml_Script_OwnerY(longlong *param_1,undefined8 param_2,undefined8 *param_3,undefined4 param_4,
                 undefined8 param_5)

{
  bool bVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  ulonglong uVar7;
  undefined8 *puVar8;
  undefined4 uVar10;
  ulonglong uVar9;
  undefined8 **ppuVar11;
  undefined8 local_f8;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined8 local_e8;
  undefined4 local_e0;
  undefined4 local_dc;
  undefined8 local_d8;
  byte local_cc;
  undefined1 local_c8 [12];
  byte local_bc;
  undefined8 local_b8;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined8 local_a8;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined8 local_98;
  char *local_90;
  undefined4 local_88;
  undefined8 local_78;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 *local_68;
  undefined1 *local_60;
  uint local_58 [2];
  undefined8 *local_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  
  local_90 = "gml_Script_OwnerTeam";
  local_98 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_98;
  local_88 = 0x1d;
  FUN_140041df0(local_58,param_4,1,param_5);
  uVar10 = 1;
  _eh_vector_constructor_iterator_(&local_d8,0x10,2,FUN_1400424d0,FUN_140041b30);
  uStack_9c = 0xffffff;
  local_a8 = 0;
  uStack_6c = 0xffffff;
  local_78 = 0;
  local_dc = 0;
  local_e8 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_88 = 0x1d;
  puVar8 = &DAT_1419df7b0;
  uVar7 = (ulonglong)local_58[0];
  if ((int)local_58[0] < 1) {
    puVar5 = &DAT_1419df7b0;
  }
  else {
    puVar5 = (undefined8 *)*local_50;
  }
  iVar4 = FUN_140e851f0(puVar5,&DAT_1419df7b0,DAT_141955260,0);
  if (iVar4 == 0) {
    local_88 = 0x1d;
    if ((int)local_58[0] < 1) {
      puVar5 = &DAT_1419df7b0;
    }
    else {
      puVar5 = (undefined8 *)*local_50;
    }
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar5 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar5);
    }
    *(undefined4 *)((longlong)puVar5 + 0xc) = 10;
    *puVar5 = 0;
  }
  local_88 = 0x1f;
  if ((1 << ((byte)local_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e8);
  }
  local_e8 = 0;
  local_e0 = 0;
  local_dc = 5;
  puVar5 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_141a1f0d0);
  if (puVar5 != &local_d8) {
    local_f8 = (longlong *)*puVar5;
    uStack_f0 = *(undefined4 *)(puVar5 + 1);
    uStack_ec = *(undefined4 *)((longlong)puVar5 + 0xc);
    if ((1 << (local_cc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_d8);
    }
    FUN_140041b80(&local_d8,&local_f8);
  }
  local_68 = &local_d8;
  ppuVar11 = &local_68;
  uVar9 = CONCAT44(uVar10,DAT_141a02ef8);
  uVar6 = FUN_140e634e0(param_1,param_2,&local_e8,1,uVar9,ppuVar11);
  cVar3 = FUN_140e491e0(uVar6);
  if (cVar3 != '\0') {
    local_88 = 0x1f;
    uVar6 = (**(code **)(*param_1 + 8))(param_1,DAT_141a1f0d0);
    puVar5 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a56cc0);
    ppuVar11 = (undefined8 **)((ulonglong)ppuVar11 & 0xffffffffffffff00);
    uVar9 = uVar9 & 0xffffffffffffff00;
    FUN_140e87440(uVar6,DAT_141a56cd0,0x80000000,&local_a8,uVar9,ppuVar11);
    FUN_140e609c0(param_1);
    if (&local_a8 != puVar5) {
      local_f8 = (longlong *)local_a8;
      uStack_f0 = uStack_a0;
      uStack_ec = uStack_9c;
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar5 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar5);
      }
      FUN_140041b80(puVar5,&local_f8);
    }
    FUN_140e60910(1);
  }
  local_88 = 0x20;
  if ((1 << ((byte)local_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e8);
  }
  local_e8 = 0;
  local_e0 = 0;
  local_dc = 5;
  uStack_ec = 6;
  uVar9 = uVar9 & 0xffffffffffffff00;
  local_f8 = param_1;
  FUN_140e87440(&local_f8,DAT_141a0a828,0x80000000,&local_78,uVar9,
                (ulonglong)ppuVar11 & 0xffffffffffffff00);
  uVar10 = (undefined4)(uVar9 >> 0x20);
  if ((1 << ((byte)uStack_ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f8);
  }
  local_f8 = (longlong *)local_78;
  uStack_f0 = uStack_70;
  uStack_ec = uStack_6c;
  if ((1 << (local_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d8);
  }
  FUN_140041b80(&local_d8,&local_f8);
  local_68 = &local_d8;
  local_f8 = (longlong *)CONCAT44(uRam0000000141dce53c,_DAT_141dce538);
  uStack_f0 = uRam0000000141dce540;
  uStack_ec = DAT_141dce544;
  if ((1 << (local_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_c8);
  }
  FUN_140041b80(local_c8,&local_f8);
  local_60 = local_c8;
  uVar6 = FUN_140e634e0(param_1,param_2,&local_e8,2,CONCAT44(uVar10,DAT_141a56cf0),&local_68);
  cVar3 = FUN_140e491e0(uVar6);
  if (cVar3 == '\0') {
    if (0 < (int)local_58[0]) {
      puVar8 = (undefined8 *)*local_50;
    }
    local_ac = *(undefined4 *)((longlong)puVar8 + 0xc);
    local_b0 = *(undefined4 *)(puVar8 + 1);
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar8 + 0xc) & 0x1f) & 0x46U) == 0) {
      local_b8 = *puVar8;
    }
    else {
      FUN_1400419b0(&local_b8,puVar8);
    }
    puVar8 = &local_b8;
    bVar2 = false;
    bVar1 = true;
  }
  else {
    puVar8 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_141a56cc0);
    uStack_ec = *(undefined4 *)((longlong)puVar8 + 0xc);
    uStack_f0 = *(undefined4 *)(puVar8 + 1);
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar8 + 0xc) & 0x1f) & 0x46U) == 0) {
      local_f8 = (longlong *)*puVar8;
    }
    else {
      FUN_1400419b0(&local_f8,puVar8);
    }
    puVar8 = &local_f8;
    bVar2 = true;
    bVar1 = false;
  }
  if (puVar8 != param_3) {
    local_48 = *(undefined4 *)puVar8;
    uStack_44 = *(undefined4 *)((longlong)puVar8 + 4);
    uStack_40 = *(undefined4 *)(puVar8 + 1);
    uStack_3c = *(undefined4 *)((longlong)puVar8 + 0xc);
    if ((1 << ((byte)*(undefined4 *)((longlong)param_3 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(param_3);
    }
    FUN_140041b80(param_3,&local_48);
  }
  if (bVar1) {
    if ((1 << ((byte)local_ac & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_b8);
    }
  }
  if ((bVar2) && ((1 << ((byte)uStack_ec & 0x1f) & 0x46U) != 0)) {
    FUN_140041a50(&local_f8);
  }
  if ((1 << ((byte)local_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e8);
  }
  if ((1 << ((byte)uStack_6c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_78);
  }
  if ((1 << ((byte)uStack_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a8);
  }
  _eh_vector_destructor_iterator_(&local_d8,0x10,2,FUN_140041b30);
  if (0 < (int)local_58[0]) {
    puVar8 = local_50;
    do {
      puVar5 = (undefined8 *)*puVar8;
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar5 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar5);
      }
      *puVar5 = 0;
      *(undefined4 *)(puVar5 + 1) = 0;
      *(undefined4 *)((longlong)puVar5 + 0xc) = 5;
      puVar8 = puVar8 + 1;
      uVar7 = uVar7 - 1;
    } while (uVar7 != 0);
  }
  FUN_140e4cd60(local_50);
  DAT_141dc7a50 = (undefined8 *)local_98;
  return param_3;
}

