// gml_Script_anon_8267_gml_Object_oPlayer_Other_10 @ 0x140c6cf90

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
gml_Script_anon_8267_gml_Object_oPlayer_Other_10
          (longlong *param_1,undefined8 param_2,undefined8 *param_3,undefined4 param_4,
          undefined8 param_5)

{
  char cVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  ulonglong uVar6;
  code *pcVar7;
  undefined4 uVar9;
  ulonglong uVar8;
  ulonglong in_stack_ffffffffffffff20;
  undefined1 **ppuVar10;
  undefined8 local_d8;
  undefined4 local_d0;
  undefined4 local_cc;
  undefined8 local_c8;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined1 local_b8 [12];
  byte local_ac;
  undefined1 local_a8 [12];
  byte local_9c;
  undefined1 *local_98;
  undefined1 *local_90;
  undefined8 local_88;
  char *local_80;
  undefined4 local_78;
  undefined8 local_70;
  undefined4 local_64;
  undefined8 local_60;
  undefined4 local_54;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  uint local_38 [2];
  undefined8 *local_30;
  
  local_80 = "gml_Script_anon@7920@gml_Object_oPlayer_Other_10";
  local_88 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_88;
  local_78 = 0x14f;
  FUN_140041df0(local_38,param_4,1,param_5);
  pcVar7 = FUN_140041b30;
  _eh_vector_constructor_iterator_(local_b8,0x10,2,FUN_1400424d0,FUN_140041b30);
  local_64 = 0xffffff;
  local_70 = 0;
  local_54 = 0xffffff;
  local_60 = 0;
  local_cc = 0;
  local_d8 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_78 = 0x14f;
  puVar5 = &DAT_1419df7b0;
  uVar6 = (ulonglong)local_38[0];
  if ((int)local_38[0] < 1) {
    puVar3 = &DAT_1419df7b0;
  }
  else {
    puVar3 = (undefined8 *)*local_30;
  }
  iVar2 = FUN_140e851f0(puVar3,&DAT_1419df7b0,DAT_141955260,0);
  if (iVar2 == 0) {
    local_78 = 0x14f;
    if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_d8);
    }
    local_d8 = 0;
    local_d0 = 0;
    local_cc = 5;
    if (0 < (int)local_38[0]) {
      puVar5 = (undefined8 *)*local_30;
    }
    in_stack_ffffffffffffff20 = 0;
    pcVar7 = (code *)CONCAT44((int)((ulonglong)pcVar7 >> 0x20),DAT_1419fd6d8);
    puVar3 = (undefined8 *)FUN_140e634e0(param_1,param_2,&local_d8,0,pcVar7,0);
    if (puVar3 != puVar5) {
      local_c8 = *puVar3;
      uStack_c0 = *(undefined4 *)(puVar3 + 1);
      uStack_bc = *(undefined4 *)((longlong)puVar3 + 0xc);
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar5 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar5);
      }
      FUN_140041b80(puVar5,&local_c8);
    }
  }
  local_78 = 0x150;
  if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d8);
  }
  local_d8 = 0;
  local_d0 = 0;
  local_cc = 5;
  uVar4 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f5868);
  FUN_140e87440(uVar4,DAT_1419f5848,0x80000000,&local_70,(ulonglong)pcVar7 & 0xffffffffffffff00,
                in_stack_ffffffffffffff20 & 0xffffffffffffff00);
  local_c8 = CONCAT44(uRam0000000141ddab1c,_DAT_141ddab18);
  uStack_c0 = uRam0000000141ddab20;
  uStack_bc = DAT_141ddab24;
  if ((1 << (local_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_b8);
  }
  FUN_140041b80(local_b8,&local_c8);
  local_98 = local_b8;
  uVar4 = FUN_140069500(uVar4);
  ppuVar10 = &local_98;
  puVar5 = &local_70;
  uVar4 = FUN_140e63610(uVar4,param_2,&local_d8,1,puVar5,ppuVar10);
  cVar1 = FUN_140e491e0(uVar4);
  if (cVar1 == '\0') {
    local_78 = 0x151;
    if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_d8);
    }
    local_d8 = 0;
    local_d0 = 0;
    local_cc = 5;
    uVar4 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f5868);
    FUN_140e87440(uVar4,DAT_1419f5848,0x80000000,&local_70,(ulonglong)puVar5 & 0xffffffffffffff00,
                  (ulonglong)ppuVar10 & 0xffffffffffffff00);
    local_c8 = CONCAT44(uRam0000000141ddab6c,_DAT_141ddab68);
    uStack_c0 = uRam0000000141ddab70;
    uStack_bc = DAT_141ddab74;
    if ((1 << (local_ac & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_b8);
    }
    FUN_140041b80(local_b8,&local_c8);
    local_98 = local_b8;
    uVar4 = FUN_140069500(uVar4);
    puVar5 = &local_70;
    uVar4 = FUN_140e63610(uVar4,param_2,&local_d8,1,puVar5,&local_98);
    uVar9 = (undefined4)((ulonglong)puVar5 >> 0x20);
    cVar1 = FUN_140e491e0(uVar4);
    if (cVar1 == '\0') {
      local_78 = 0x153;
      if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_d8);
      }
      local_d8 = 0;
      local_d0 = 0;
      local_cc = 5;
      uStack_bc = 0xf;
      local_c8 = 0x1000000000000b9;
      local_48 = 0xb9;
      uStack_44 = 0x1000000;
      uStack_40 = uStack_c0;
      uStack_3c = 0xf;
      if ((1 << (local_ac & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_b8);
      }
      FUN_140041b80(local_b8,&local_48);
      local_98 = local_b8;
      ppuVar10 = &local_98;
      uVar8 = CONCAT44(uVar9,DAT_141a02ef8);
      uVar4 = FUN_140e634e0(param_1,param_2,&local_d8,1,uVar8,ppuVar10);
      cVar1 = FUN_140e491e0(uVar4);
      if (cVar1 != '\0') {
        local_78 = 0x154;
        uStack_bc = 0xf;
        local_c8 = 0x1000000000000b9;
        local_48 = 0xb9;
        uStack_44 = 0x1000000;
        uStack_40 = uStack_c0;
        uStack_3c = 0xf;
        if ((1 << (local_9c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_a8);
        }
        FUN_140041b80(local_a8,&local_48);
        local_90 = local_a8;
        FUN_140edd0e0(param_1,param_2,1,&local_90);
      }
      local_78 = 0x155;
      puVar5 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a0a738);
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar5 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar5);
      }
      *(undefined4 *)((longlong)puVar5 + 0xc) = 0;
      *puVar5 = 0;
      local_78 = 0x157;
      if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_d8);
      }
      local_d8 = 0;
      local_d0 = 0;
      local_cc = 5;
      uVar4 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f5868);
      FUN_140e87440(uVar4,DAT_141a55540,0x80000000,&local_60,uVar8 & 0xffffffffffffff00,
                    (ulonglong)ppuVar10 & 0xffffffffffffff00);
      local_48 = _DAT_141ddab28;
      uStack_44 = uRam0000000141ddab2c;
      uStack_40 = uRam0000000141ddab30;
      uStack_3c = DAT_141ddab34;
      if ((1 << (local_ac & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_b8);
      }
      FUN_140041b80(local_b8,&local_48);
      local_98 = local_b8;
      uVar4 = FUN_140069500(uVar4);
      FUN_140e63610(uVar4,param_2,&local_d8,1,&local_60,&local_98);
    }
    else {
      local_78 = 0x151;
    }
  }
  else {
    local_78 = 0x150;
  }
  if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d8);
  }
  if ((1 << ((byte)local_54 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_60);
  }
  if ((1 << ((byte)local_64 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_70);
  }
  _eh_vector_destructor_iterator_(local_b8,0x10,2,FUN_140041b30);
  if (0 < (int)local_38[0]) {
    puVar5 = local_30;
    do {
      puVar3 = (undefined8 *)*puVar5;
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar3 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar3);
      }
      *puVar3 = 0;
      *(undefined4 *)(puVar3 + 1) = 0;
      *(undefined4 *)((longlong)puVar3 + 0xc) = 5;
      puVar5 = puVar5 + 1;
      uVar6 = uVar6 - 1;
    } while (uVar6 != 0);
  }
  FUN_140e4cd60(local_30);
  DAT_141dc7a50 = (undefined8 *)local_88;
  return param_3;
}

