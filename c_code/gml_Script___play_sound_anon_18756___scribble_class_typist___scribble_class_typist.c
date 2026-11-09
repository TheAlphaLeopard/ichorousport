// gml_Script___play_sound_anon_18756___scribble_class_typist___scribble_class_typist @ 0x14016a180

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
gml_Script___play_sound_anon_18756___scribble_class_typist___scribble_class_typist
          (longlong *param_1,undefined8 param_2,undefined8 *param_3,int param_4,undefined8 *param_5)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  ulonglong uVar6;
  undefined8 *puVar7;
  bool bVar8;
  undefined4 uVar9;
  ulonglong uVar10;
  undefined8 **ppuVar11;
  undefined8 local_108;
  undefined4 local_100;
  undefined4 local_fc;
  undefined8 local_f8;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined8 local_e8;
  undefined4 local_e0;
  undefined4 local_dc;
  undefined8 local_d8;
  char *local_d0;
  undefined4 local_c8;
  undefined8 local_c0;
  byte local_b4;
  undefined1 local_b0 [12];
  byte local_a4;
  undefined8 *local_a0;
  undefined1 *local_98;
  undefined8 local_90;
  undefined4 local_84;
  undefined8 local_80;
  undefined4 local_74;
  undefined8 local_68;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  
  local_d0 = "gml_Script___associate@anon@12184@__scribble_class_typist@__scribble_class_typist";
  local_d8 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_d8;
  local_c8 = 0x1c3;
  uVar9 = 1;
  _eh_vector_constructor_iterator_(&local_c0,0x10,2,FUN_1400424d0,FUN_140041b30);
  local_74 = 0xffffff;
  local_80 = 0;
  local_84 = 0xffffff;
  local_90 = 0;
  uStack_5c = 0xffffff;
  local_68 = 0;
  local_fc = 0;
  local_108 = 0;
  local_dc = 0;
  local_e8 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_c8 = 0x1c5;
  bVar8 = false;
  uVar3 = (**(code **)(*param_1 + 8))(param_1,DAT_141a07b48);
  cVar1 = FUN_140e491e0(uVar3);
  puVar7 = &DAT_1419df7b0;
  if (cVar1 != '\0') {
    uVar3 = (**(code **)(*param_1 + 8))(param_1,DAT_141a07698);
    iVar2 = FUN_140e851f0(uVar3,&DAT_1419df7b0,DAT_141955260,0);
    if (iVar2 == 0) {
      bVar8 = true;
    }
    else {
      uVar3 = (**(code **)(*param_1 + 8))(param_1,DAT_141a07a98);
      cVar1 = FUN_140e491e0(uVar3);
      bVar8 = cVar1 == '\0';
    }
  }
  if ((1 << ((byte)local_74 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_80);
  }
  local_74 = 0xd;
  if (bVar8) {
    local_80 = 0x3ff0000000000000;
  }
  else {
    local_80 = 0;
  }
  local_c8 = 0x1c7;
  uVar3 = (**(code **)(*param_1 + 8))(param_1,DAT_141a07698);
  iVar2 = FUN_140e851f0(uVar3,&DAT_1419df7b0,DAT_141955260,0);
  if (iVar2 == 0) {
LAB_14016a6ef:
    local_c8 = 0x1c9;
    if ((1 << ((byte)local_dc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_e8);
    }
    local_e8 = 0;
    local_e0 = 0;
    local_dc = 5;
    uVar3 = (**(code **)(*param_1 + 8))(param_1,DAT_141a07778);
    FUN_140e63610(param_1,param_2,&local_e8,0,uVar3,0);
    uVar9 = (undefined4)((ulonglong)uVar3 >> 0x20);
    local_c8 = 0x1ca;
  }
  else {
    if ((1 << ((byte)local_fc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_108);
    }
    local_108 = 0;
    local_100 = 0;
    local_fc = 5;
    puVar4 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_141a07698);
    if (puVar4 != &local_c0) {
      local_f8 = *puVar4;
      uStack_f0 = *(undefined4 *)(puVar4 + 1);
      uStack_ec = *(undefined4 *)((longlong)puVar4 + 0xc);
      if ((1 << (local_b4 & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_c0);
      }
      FUN_140041b80(&local_c0,&local_f8);
    }
    local_a0 = &local_c0;
    ppuVar11 = &local_a0;
    uVar6 = CONCAT44(uVar9,DAT_141a04538);
    uVar3 = FUN_140e634e0(param_1,param_2,&local_108,1,uVar6,ppuVar11);
    cVar1 = FUN_140e491e0(uVar3);
    if (cVar1 == '\0') goto LAB_14016a6ef;
    uVar3 = (**(code **)(*param_1 + 8))(param_1,DAT_141a07698);
    uVar6 = uVar6 & 0xffffffffffffff00;
    FUN_140e87440(uVar3,DAT_141a05da8,0x80000000,&local_90,uVar6,
                  (ulonglong)ppuVar11 & 0xffffffffffffff00);
    uVar9 = (undefined4)(uVar6 >> 0x20);
    if (param_4 < 1) {
      puVar4 = &DAT_1419df7b0;
    }
    else {
      puVar4 = (undefined8 *)*param_5;
    }
    iVar2 = FUN_140e851f0(&local_90,puVar4,DAT_141955260,0);
    if (iVar2 != 0) goto LAB_14016a6ef;
    local_c8 = 0x1cc;
    if ((1 << ((byte)local_fc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_108);
    }
    local_108 = 0;
    local_100 = 0;
    local_fc = 5;
    puVar4 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_141a07698);
    if (puVar4 != &local_c0) {
      local_f8 = *puVar4;
      uStack_f0 = *(undefined4 *)(puVar4 + 1);
      uStack_ec = *(undefined4 *)((longlong)puVar4 + 0xc);
      if ((1 << (local_b4 & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_c0);
      }
      FUN_140041b80(&local_c0,&local_f8);
    }
    local_a0 = &local_c0;
    ppuVar11 = &local_a0;
    uVar6 = CONCAT44(uVar9,DAT_141a04538);
    uVar3 = FUN_140e634e0(param_1,param_2,&local_108,1,uVar6,ppuVar11);
    cVar1 = FUN_140e491e0(uVar3);
    if (cVar1 != '\0') {
      local_c8 = 0x1d2;
      uVar3 = (**(code **)(*param_1 + 8))(param_1,DAT_141a07698);
      uVar5 = (**(code **)(*param_1 + 8))(param_1,DAT_141a07c18);
      uVar10 = (ulonglong)ppuVar11 & 0xffffffffffffff00;
      uVar6 = uVar6 & 0xffffffffffffff00;
      FUN_140e87440(uVar3,DAT_141a05da8,0x80000000,&local_90,uVar6,uVar10);
      ppuVar11 = (undefined8 **)(uVar10 & 0xffffffffffffff00);
      uVar6 = uVar6 & 0xffffffffffffff00;
      FUN_140e87440(&local_90,DAT_141a05148,0x80000000,&local_68,uVar6,ppuVar11);
      iVar2 = FUN_140e851f0(&local_68,uVar5,DAT_141955260,0);
      if (iVar2 != 0) {
        local_c8 = 0x1d4;
        if ((1 << ((byte)local_fc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_108);
        }
        local_108 = 0;
        local_100 = 0;
        local_fc = 5;
        uVar6 = (**(code **)(*param_1 + 8))(param_1,DAT_141a07778);
        ppuVar11 = (undefined8 **)0x0;
        FUN_140e63610(param_1,param_2,&local_108,0,uVar6,0);
      }
      goto LAB_14016a842;
    }
    local_c8 = 0x1ce;
    if ((1 << ((byte)local_dc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_e8);
    }
    local_e8 = 0;
    local_e0 = 0;
    local_dc = 5;
    local_f8 = CONCAT44(uRam0000000141dcbabc,_DAT_141dcbab8);
    uStack_f0 = uRam0000000141dcbac0;
    uStack_ec = DAT_141dcbac4;
    if ((1 << (local_a4 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_b0);
    }
    FUN_140041b80(local_b0,&local_f8);
    local_98 = local_b0;
    gml_Script___scribble_error(param_1,param_2,&local_e8,1,&local_98);
    local_c8 = 0x1cf;
    if ((1 << ((byte)local_fc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_108);
    }
    local_108 = 0;
    local_100 = 0;
    local_fc = 5;
    uVar3 = (**(code **)(*param_1 + 8))(param_1,DAT_141a07778);
    FUN_140e63610(param_1,param_2,&local_108,0,uVar3,0);
    uVar9 = (undefined4)((ulonglong)uVar3 >> 0x20);
    local_c8 = 0x1d0;
  }
  if ((1 << ((byte)local_fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_108);
  }
  local_108 = 0;
  local_100 = 0;
  local_fc = 5;
  puVar4 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a07698);
  if ((param_4 < 1) || (puVar7 = (undefined8 *)*param_5, puVar7 != &local_c0)) {
    local_f8 = *puVar7;
    uStack_f0 = *(undefined4 *)(puVar7 + 1);
    uStack_ec = *(undefined4 *)((longlong)puVar7 + 0xc);
    if ((1 << (local_b4 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_c0);
    }
    FUN_140041b80(&local_c0,&local_f8);
  }
  local_a0 = &local_c0;
  FUN_140e609c0(param_1);
  ppuVar11 = &local_a0;
  uVar6 = CONCAT44(uVar9,DAT_141a04a48);
  puVar7 = (undefined8 *)FUN_140e634e0(param_1,param_2,&local_108,1,uVar6,ppuVar11);
  if (puVar7 != puVar4) {
    local_f8 = *puVar7;
    uStack_f0 = *(undefined4 *)(puVar7 + 1);
    uStack_ec = *(undefined4 *)((longlong)puVar7 + 0xc);
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar4 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar4);
    }
    FUN_140041b80(puVar4,&local_f8);
  }
  FUN_140e60910(1);
LAB_14016a842:
  local_c8 = 0x1d7;
  puVar7 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a07c18);
  uVar3 = (**(code **)(*param_1 + 8))(param_1,DAT_141a07698);
  uVar10 = (ulonglong)ppuVar11 & 0xffffffffffffff00;
  uVar6 = uVar6 & 0xffffffffffffff00;
  FUN_140e87440(uVar3,DAT_141a05da8,0x80000000,&local_90,uVar6,uVar10);
  FUN_140e87440(&local_90,DAT_141a05148,0x80000000,&local_68,uVar6 & 0xffffffffffffff00,
                uVar10 & 0xffffffffffffff00);
  FUN_140e609c0(param_1);
  if (&local_68 != puVar7) {
    local_f8 = local_68;
    uStack_f0 = uStack_60;
    uStack_ec = uStack_5c;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar7 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar7);
    }
    FUN_140041b80(puVar7,&local_f8);
  }
  FUN_140e60910(1);
  local_c8 = 0x1d9;
  cVar1 = FUN_140e491e0(&local_80);
  if (cVar1 != '\0') {
    local_c8 = 0x1db;
    puVar7 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a07b48);
    uStack_ec = 0xd;
    local_f8 = 0x3ff0000000000000;
    if (&local_f8 != puVar7) {
      local_58 = 0;
      uStack_54 = 0x3ff00000;
      uStack_50 = uStack_f0;
      uStack_4c = 0xd;
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar7 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar7);
      }
      FUN_140041b80(puVar7,&local_58);
    }
    local_c8 = 0x1dc;
    puVar7 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a07a98);
    uStack_ec = 0xd;
    local_f8 = 0;
    if (&local_f8 != puVar7) {
      local_58 = 0;
      uStack_54 = 0;
      uStack_50 = uStack_f0;
      uStack_4c = 0xd;
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar7 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar7);
      }
      FUN_140041b80(puVar7,&local_58);
    }
  }
  local_c8 = 0x1df;
  if ((1 << ((byte)*(undefined4 *)((longlong)param_3 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(param_3);
  }
  *(undefined4 *)((longlong)param_3 + 0xc) = 6;
  *param_3 = param_1;
  uVar3 = FUN_140e5c910();
  FUN_140e42c10(uVar3,param_1);
  if ((1 << ((byte)local_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e8);
  }
  if ((1 << ((byte)local_fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_108);
  }
  if ((1 << ((byte)uStack_5c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_68);
  }
  if ((1 << ((byte)local_84 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_90);
  }
  if ((1 << ((byte)local_74 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_80);
  }
  _eh_vector_destructor_iterator_(&local_c0,0x10,2,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_d8;
  return param_3;
}

