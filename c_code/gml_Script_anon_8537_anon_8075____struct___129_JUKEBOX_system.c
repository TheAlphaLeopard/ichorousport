// gml_Script_anon_8537_anon_8075____struct___129_JUKEBOX_system @ 0x14039b6a0

undefined8 *
gml_Script_anon_8537_anon_8075____struct___129_JUKEBOX_system
          (longlong *param_1,undefined8 param_2,undefined8 *param_3,int param_4,undefined8 *param_5)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  code *pcVar5;
  ulonglong in_stack_ffffffffffffff40;
  undefined1 *local_b8;
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
  undefined8 local_78;
  byte local_6c;
  undefined8 local_68;
  byte local_5c;
  undefined8 local_58;
  char *local_50;
  undefined4 local_48;
  undefined8 *local_40;
  undefined8 *local_38;
  
  local_50 = "gml_Script_anon@7833@___struct___129@JUKEBOX_system";
  local_58 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_58;
  local_48 = 0x112;
  pcVar5 = FUN_140041b30;
  _eh_vector_constructor_iterator_(&local_78,0x10,2,FUN_1400424d0,FUN_140041b30);
  local_7c = 0xffffff;
  local_88 = 0;
  local_8c = 0;
  local_98 = 0;
  local_9c = 0;
  local_a8 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_48 = 0x113;
  uVar2 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f4ac8);
  uStack_ac = 0;
  local_b8 = &DAT_bff0000000000000;
  iVar1 = FUN_140e851f0(uVar2,&local_b8,DAT_141955260,0);
  if ((1 << ((byte)uStack_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b8);
  }
  if (iVar1 == 0) {
    local_48 = 0x113;
    if ((1 << ((byte)*(undefined4 *)((longlong)param_3 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(param_3);
    }
    *(undefined4 *)((longlong)param_3 + 0xc) = 0;
    *param_3 = &DAT_bff0000000000000;
    goto LAB_14039b985;
  }
  local_48 = 0x114;
  if ((1 << ((byte)local_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_98);
  }
  local_98 = 0;
  local_90 = 0;
  local_8c = 5;
  if ((1 << ((byte)local_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a8);
  }
  local_a8 = 0;
  local_a0 = 0;
  local_9c = 5;
  uVar2 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f4938);
  uVar3 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f4ac8);
  FUN_140e87440(uVar3,DAT_141a0aa28,0x80000000,&local_88,(ulonglong)pcVar5 & 0xffffffffffffff00,
                in_stack_ffffffffffffff40 & 0xffffffffffffff00);
  uVar3 = FUN_140069500(uVar3);
  puVar4 = (undefined8 *)FUN_140e63610(uVar3,param_2,&local_a8,0,&local_88,0);
  if (puVar4 != &local_78) {
    local_b8 = (undefined1 *)*puVar4;
    uStack_b0 = *(undefined4 *)(puVar4 + 1);
    uStack_ac = *(undefined4 *)((longlong)puVar4 + 0xc);
    if ((1 << (local_6c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_78);
    }
    FUN_140041b80(&local_78,&local_b8);
  }
  local_40 = &local_78;
  if (param_4 < 1) {
    param_5 = &DAT_1419df7b0;
LAB_14039b900:
    local_b8 = (undefined1 *)*param_5;
    uStack_b0 = *(undefined4 *)(param_5 + 1);
    uStack_ac = *(undefined4 *)((longlong)param_5 + 0xc);
    if ((1 << (local_5c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_68);
    }
    FUN_140041b80(&local_68,&local_b8);
  }
  else {
    param_5 = (undefined8 *)*param_5;
    if (param_5 != &local_68) goto LAB_14039b900;
  }
  local_38 = &local_68;
  puVar4 = (undefined8 *)FUN_140e63610(param_1,param_2,&local_98,2,uVar2,&local_40);
  if (puVar4 != param_3) {
    local_b8 = (undefined1 *)*puVar4;
    uStack_b0 = *(undefined4 *)(puVar4 + 1);
    uStack_ac = *(undefined4 *)((longlong)puVar4 + 0xc);
    if ((1 << ((byte)*(undefined4 *)((longlong)param_3 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(param_3);
    }
    FUN_140041b80(param_3,&local_b8);
  }
LAB_14039b985:
  if ((1 << ((byte)local_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a8);
  }
  if ((1 << ((byte)local_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_98);
  }
  if ((1 << ((byte)local_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_88);
  }
  _eh_vector_destructor_iterator_(&local_78,0x10,2,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_58;
  return param_3;
}

