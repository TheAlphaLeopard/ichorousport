// gml_Script_anon_7237____struct___129_JUKEBOX_system @ 0x140398a90

undefined8 *
gml_Script_anon_7237____struct___129_JUKEBOX_system
          (longlong *param_1,undefined8 param_2,undefined8 *param_3)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  code *pcVar5;
  undefined4 uVar6;
  ulonglong in_stack_ffffffffffffff30;
  undefined8 local_c8;
  undefined4 local_c0;
  undefined4 local_bc;
  undefined8 local_b8;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined8 local_a8;
  undefined4 local_9c;
  undefined8 local_98;
  char *local_90;
  undefined4 local_88;
  undefined8 local_80;
  undefined4 local_74;
  undefined8 *local_70;
  undefined1 *local_68;
  undefined1 local_60 [16];
  undefined1 local_50 [12];
  byte local_44;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  local_90 = "gml_Script_anon@5904@___struct___129@JUKEBOX_system";
  local_98 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_98;
  local_88 = 0xde;
  pcVar5 = FUN_140041b30;
  _eh_vector_constructor_iterator_(local_60,0x10,2,FUN_1400424d0,FUN_140041b30);
  local_74 = 0xffffff;
  local_80 = 0;
  local_9c = 0xffffff;
  local_a8 = 0;
  local_bc = 0;
  local_c8 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_88 = 0xdf;
  uVar2 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f4ac8);
  uStack_ac = 0;
  local_b8 = &DAT_bff0000000000000;
  iVar1 = FUN_140e851f0(uVar2,&local_b8,DAT_141955260,0);
  if ((1 << ((byte)uStack_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b8);
  }
  if (iVar1 == 0) {
    local_88 = 0xdf;
  }
  else {
    local_88 = 0xe0;
    if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_c8);
    }
    local_c8 = 0;
    local_c0 = 0;
    local_bc = 5;
    uVar2 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f4ac8);
    FUN_140e87440(uVar2,DAT_1419f4d88,0x80000000,&local_80,(ulonglong)pcVar5 & 0xffffffffffffff00,
                  in_stack_ffffffffffffff30 & 0xffffffffffffff00);
    uVar2 = FUN_140069500(uVar2);
    puVar4 = &local_80;
    puVar3 = (undefined8 *)FUN_140e63610(uVar2,param_2,&local_c8,0,puVar4,0);
    uVar6 = (undefined4)((ulonglong)puVar4 >> 0x20);
    if (puVar3 != &local_a8) {
      local_b8 = (undefined1 *)*puVar3;
      uStack_b0 = *(undefined4 *)(puVar3 + 1);
      uStack_ac = *(undefined4 *)((longlong)puVar3 + 0xc);
      if ((1 << ((byte)local_9c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_a8);
      }
      FUN_140041b80(&local_a8,&local_b8);
    }
    local_88 = 0xe1;
    if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_c8);
    }
    local_c8 = 0;
    local_c0 = 0;
    local_bc = 5;
    local_70 = &local_a8;
    FUN_140e645a0(&local_b8,gml_Script_anon_6296____struct___129_JUKEBOX_system,param_1);
    local_38 = (undefined4)local_b8;
    uStack_34 = local_b8._4_4_;
    uStack_30 = uStack_b0;
    uStack_2c = uStack_ac;
    if ((1 << (local_44 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_50);
    }
    FUN_140041b80(local_50,&local_38);
    if ((1 << ((byte)uStack_ac & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_b8);
    }
    local_68 = local_50;
    FUN_140e634e0(param_1,param_2,&local_c8,2,CONCAT44(uVar6,DAT_1419f4b88),&local_70);
    local_88 = 0xe4;
    puVar4 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419f4ac8);
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar4 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar4);
    }
    *(undefined4 *)((longlong)puVar4 + 0xc) = 0;
    *puVar4 = &DAT_bff0000000000000;
    local_88 = 0xe5;
  }
  if ((1 << ((byte)*(undefined4 *)((longlong)param_3 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(param_3);
  }
  *(undefined4 *)((longlong)param_3 + 0xc) = 0;
  *param_3 = &DAT_bff0000000000000;
  if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  if ((1 << ((byte)local_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a8);
  }
  if ((1 << ((byte)local_74 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_80);
  }
  _eh_vector_destructor_iterator_(local_60,0x10,2,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_98;
  return param_3;
}

