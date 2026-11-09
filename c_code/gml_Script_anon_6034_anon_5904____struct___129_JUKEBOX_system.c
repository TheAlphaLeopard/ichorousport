// gml_Script_anon_6034_anon_5904____struct___129_JUKEBOX_system @ 0x140397c00

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
gml_Script_anon_6034_anon_5904____struct___129_JUKEBOX_system
          (undefined8 param_1,undefined8 param_2,undefined8 *param_3,int param_4,undefined8 *param_5
          )

{
  int iVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  code *pcVar6;
  undefined4 uVar7;
  ulonglong in_stack_ffffffffffffff20;
  ulonglong uVar8;
  undefined8 local_d8;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined8 local_c8;
  undefined4 local_c0;
  undefined4 local_bc;
  undefined8 local_b8;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined8 local_a8;
  undefined4 local_9c;
  undefined8 local_98;
  undefined4 local_8c;
  undefined8 local_88;
  char *local_80;
  undefined4 local_78;
  undefined8 local_70;
  byte local_64;
  undefined1 local_60 [12];
  byte local_54;
  undefined1 local_50 [12];
  byte local_44;
  undefined8 *local_40;
  undefined1 *local_38;
  undefined1 *local_30;
  
  local_80 = "gml_Script_anon@5686@anon@5283@___struct___129@JUKEBOX_system";
  local_88 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_88;
  local_78 = 0xd3;
  pcVar6 = FUN_140041b30;
  _eh_vector_constructor_iterator_(&local_70,0x10,3,FUN_1400424d0,FUN_140041b30);
  local_8c = 0xffffff;
  local_98 = 0;
  local_9c = 0xffffff;
  local_a8 = 0;
  local_bc = 0;
  local_c8 = 0;
  local_ac = 0;
  local_b8 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_78 = 0xd4;
  puVar5 = &DAT_1419df7b0;
  if (param_4 < 2) {
    FUN_140e87440(&DAT_1419df7b0,DAT_1419f4a98,0x80000000,&local_98,
                  (ulonglong)pcVar6 & 0xffffffffffffff00,
                  in_stack_ffffffffffffff20 & 0xffffffffffffff00);
    puVar3 = &DAT_1419df7b0;
  }
  else {
    FUN_140e87440(param_5[1],DAT_1419f4a98,0x80000000,&local_98,
                  (ulonglong)pcVar6 & 0xffffffffffffff00,
                  in_stack_ffffffffffffff20 & 0xffffffffffffff00);
    puVar3 = (undefined8 *)param_5[1];
  }
  uVar2 = FUN_140069500(puVar3);
  uVar8 = 0;
  puVar3 = &local_98;
  FUN_140e63610(uVar2,param_2,&local_c8,0,puVar3,0);
  local_78 = 0xd5;
  uStack_cc = DAT_141dd2374;
  uStack_d0 = DAT_141dd2370;
  if ((1 << ((byte)DAT_141dd2374 & 0x1f) & 0x46U) == 0) {
    local_d8 = DAT_141dd2368;
  }
  else {
    FUN_1400419b0(&local_d8,&DAT_141dd2368);
  }
  if (param_4 < 1) {
    puVar4 = &DAT_1419df7b0;
  }
  else {
    puVar4 = (undefined8 *)*param_5;
  }
  iVar1 = FUN_140e851f0(puVar4,&local_d8,DAT_141955260,0);
  if ((1 << ((byte)uStack_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d8);
  }
  if (iVar1 != 0) {
    local_78 = 0xd6;
    if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_c8);
    }
    local_c8 = 0;
    local_c0 = 0;
    local_bc = 5;
    if ((1 << ((byte)local_ac & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_b8);
    }
    local_b8 = 0;
    local_b0 = 0;
    local_ac = 5;
    if (param_4 < 2) {
      FUN_140e87440(&DAT_1419df7b0,DAT_1419f49a8,0x80000000,&local_a8,
                    (ulonglong)puVar3 & 0xffffffffffffff00,uVar8 & 0xffffffffffffff00);
    }
    else {
      FUN_140e87440(param_5[1],DAT_1419f49a8,0x80000000,&local_a8,
                    (ulonglong)puVar3 & 0xffffffffffffff00,uVar8 & 0xffffffffffffff00);
      puVar5 = (undefined8 *)param_5[1];
    }
    uVar2 = FUN_140069500(puVar5);
    puVar5 = &local_a8;
    puVar3 = (undefined8 *)FUN_140e63610(uVar2,param_2,&local_b8,0,puVar5,0);
    uVar7 = (undefined4)((ulonglong)puVar5 >> 0x20);
    if (puVar3 != &local_70) {
      local_d8 = *puVar3;
      uStack_d0 = *(undefined4 *)(puVar3 + 1);
      uStack_cc = *(undefined4 *)((longlong)puVar3 + 0xc);
      if ((1 << (local_64 & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_70);
      }
      FUN_140041b80(&local_70,&local_d8);
    }
    local_40 = &local_70;
    local_d8 = CONCAT44(uRam0000000141dc6514,_DAT_141dc6510);
    uStack_d0 = uRam0000000141dc6518;
    uStack_cc = uRam0000000141dc651c;
    if ((1 << (local_54 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_60);
    }
    FUN_140041b80(local_60,&local_d8);
    local_38 = local_60;
    local_d8 = CONCAT44(uRam0000000141dc6514,_DAT_141dc6510);
    uStack_d0 = uRam0000000141dc6518;
    uStack_cc = uRam0000000141dc651c;
    if ((1 << (local_44 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_50);
    }
    FUN_140041b80(local_50,&local_d8);
    local_30 = local_50;
    FUN_140e634e0(param_1,param_2,&local_c8,3,CONCAT44(uVar7,DAT_1419f4a48),&local_40);
  }
  if ((1 << ((byte)local_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b8);
  }
  if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  if ((1 << ((byte)local_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a8);
  }
  if ((1 << ((byte)local_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_98);
  }
  _eh_vector_destructor_iterator_(&local_70,0x10,3,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_88;
  return param_3;
}

