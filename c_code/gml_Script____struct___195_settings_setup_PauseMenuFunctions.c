// gml_Script____struct___195_settings_setup_PauseMenuFunctions @ 0x140425430

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
gml_Script____struct___195_settings_setup_PauseMenuFunctions
          (longlong *param_1,undefined8 param_2,undefined8 *param_3)

{
  bool bVar1;
  bool bVar2;
  char cVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  undefined1 *local_res18 [2];
  code *pcVar8;
  ulonglong in_stack_ffffffffffffff20;
  undefined1 **ppuVar9;
  undefined8 local_d8;
  undefined4 local_d0;
  undefined4 local_cc;
  undefined8 local_c8;
  undefined4 local_c0;
  undefined4 local_bc;
  undefined8 local_b8;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined8 local_a8;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined8 local_98;
  undefined4 local_90;
  undefined4 local_8c;
  undefined8 local_88;
  undefined4 local_7c;
  undefined1 local_78 [12];
  byte local_6c;
  undefined8 local_68;
  char *local_60;
  undefined4 local_58;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  
  local_60 = 
  "gml_Script_anon@7355@___struct___196@___struct___195@settings_setup@PauseMenuFunctions";
  local_68 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_68;
  local_58 = 0x133;
  pcVar8 = FUN_140041b30;
  _eh_vector_constructor_iterator_(local_78,0x10,1,FUN_1400424d0,FUN_140041b30);
  local_7c = 0xffffff;
  local_88 = 0;
  uVar4 = (**(code **)(*DAT_141a729d8 + 8))(DAT_141a729d8,DAT_1419ef508);
  local_bc = 0xffffff;
  local_c8 = 0;
  local_cc = 0xffffff;
  local_d8 = 0;
  puVar5 = (undefined8 *)(**(code **)(*DAT_141a729d8 + 8))(DAT_141a729d8,DAT_1419ef528);
  bVar2 = true;
  bVar1 = false;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_58 = 0x134;
  local_98 = 0;
  local_90 = 0;
  local_8c = 5;
  uVar6 = (**(code **)(*param_1 + 8))(param_1,DAT_141a55440);
  FUN_140e87440(uVar6,DAT_141a551b0,0x80000000,&local_88,(ulonglong)pcVar8 & 0xffffffffffffff00,
                in_stack_ffffffffffffff20 & 0xffffffffffffff00);
  local_b8 = CONCAT44(uRam0000000141dd2c7c,_DAT_141dd2c78);
  uStack_b0 = uRam0000000141dd2c80;
  uStack_ac = DAT_141dd2c84;
  if ((1 << (local_6c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_78);
  }
  FUN_140041b80(local_78,&local_b8);
  local_res18[0] = local_78;
  uVar6 = FUN_140069500(uVar6);
  ppuVar9 = local_res18;
  puVar7 = &local_88;
  uVar6 = FUN_140e63610(uVar6,param_2,&local_98,1,puVar7,ppuVar9);
  cVar3 = FUN_140e491e0(uVar6);
  if (cVar3 == '\0') {
    FUN_140e87440(uVar4,DAT_141a1dbd0,0x80000000,&local_d8,(ulonglong)puVar7 & 0xffffffffffffff00,
                  (ulonglong)ppuVar9 & 0xffffffffffffff00);
    local_9c = local_cc;
    local_a0 = local_d0;
    if ((1 << ((byte)local_cc & 0x1f) & 0x46U) == 0) {
      local_a8 = local_d8;
    }
    else {
      FUN_1400419b0(&local_a8,&local_d8);
    }
    puVar7 = &local_a8;
    bVar2 = false;
    bVar1 = true;
  }
  else {
    FUN_140e87440(uVar4,DAT_1419eef38,0x80000000,&local_c8,(ulonglong)puVar7 & 0xffffffffffffff00,
                  (ulonglong)ppuVar9 & 0xffffffffffffff00);
    uStack_ac = local_bc;
    uStack_b0 = local_c0;
    if ((1 << ((byte)local_bc & 0x1f) & 0x46U) == 0) {
      local_b8 = local_c8;
    }
    else {
      FUN_1400419b0(&local_b8,&local_c8);
    }
    puVar7 = &local_b8;
  }
  FUN_140e609c0(DAT_141a729d8);
  if (puVar7 != puVar5) {
    local_50 = *(undefined4 *)puVar7;
    uStack_4c = *(undefined4 *)((longlong)puVar7 + 4);
    uStack_48 = *(undefined4 *)(puVar7 + 1);
    uStack_44 = *(undefined4 *)((longlong)puVar7 + 0xc);
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar5 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar5);
    }
    FUN_140041b80(puVar5,&local_50);
  }
  if (bVar1) {
    if ((1 << ((byte)local_9c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_a8);
    }
  }
  if ((bVar2) && ((1 << ((byte)uStack_ac & 0x1f) & 0x46U) != 0)) {
    FUN_140041a50(&local_b8);
  }
  FUN_140e60910(1);
  if ((1 << ((byte)local_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_98);
  }
  if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d8);
  }
  if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  if ((1 << ((byte)local_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_88);
  }
  _eh_vector_destructor_iterator_(local_78,0x10,1,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_68;
  return param_3;
}

