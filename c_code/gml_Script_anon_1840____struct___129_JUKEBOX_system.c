// gml_Script_anon_1840____struct___129_JUKEBOX_system @ 0x1403936f0

undefined8 *
gml_Script_anon_1840____struct___129_JUKEBOX_system
          (longlong *param_1,undefined8 param_2,undefined8 *param_3)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *local_res8;
  code *pcVar5;
  undefined4 uVar6;
  ulonglong in_stack_ffffffffffffff60;
  undefined8 local_98;
  undefined4 local_90;
  undefined4 local_8c;
  undefined8 local_88;
  undefined4 local_80;
  undefined4 local_7c;
  undefined8 local_78;
  byte local_6c;
  undefined8 local_68;
  undefined4 local_5c;
  undefined1 *local_58;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  char *local_40;
  undefined4 local_38;
  
  local_40 = "gml_Script_anon@1571@___struct___129@JUKEBOX_system";
  local_48 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_48;
  local_38 = 0x42;
  pcVar5 = FUN_140041b30;
  _eh_vector_constructor_iterator_(&local_78,0x10,1,FUN_1400424d0,FUN_140041b30);
  local_5c = 0xffffff;
  local_68 = 0;
  local_7c = 0;
  local_88 = 0;
  local_8c = 0;
  local_98 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_38 = 0x43;
  uVar2 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f4d68);
  uStack_4c = 0;
  local_58 = &DAT_bff0000000000000;
  iVar1 = FUN_140e851f0(uVar2,&local_58,DAT_141955260,0);
  if ((1 << ((byte)uStack_4c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_58);
  }
  if (iVar1 == 0) {
    local_38 = 0x43;
    *(undefined4 *)((longlong)param_3 + 0xc) = 0xd;
    *param_3 = 0;
  }
  else {
    local_38 = 0x44;
    if ((1 << ((byte)local_7c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_88);
    }
    local_88 = 0;
    local_80 = 0;
    local_7c = 5;
    if ((1 << ((byte)local_8c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_98);
    }
    local_98 = 0;
    local_90 = 0;
    local_8c = 5;
    uVar2 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f4d68);
    FUN_140e87440(uVar2,DAT_1419f49a8,0x80000000,&local_68,(ulonglong)pcVar5 & 0xffffffffffffff00,
                  in_stack_ffffffffffffff60 & 0xffffffffffffff00);
    uVar2 = FUN_140069500(uVar2);
    puVar4 = &local_68;
    puVar3 = (undefined8 *)FUN_140e63610(uVar2,param_2,&local_98,0,puVar4,0);
    uVar6 = (undefined4)((ulonglong)puVar4 >> 0x20);
    if (puVar3 != &local_78) {
      local_58 = (undefined1 *)*puVar3;
      uStack_50 = *(undefined4 *)(puVar3 + 1);
      uStack_4c = *(undefined4 *)((longlong)puVar3 + 0xc);
      if ((1 << (local_6c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_78);
      }
      FUN_140041b80(&local_78,&local_58);
    }
    local_res8 = &local_78;
    puVar4 = (undefined8 *)
             FUN_140e634e0(param_1,param_2,&local_88,1,CONCAT44(uVar6,DAT_141a07888),&local_res8);
    if (puVar4 != param_3) {
      local_58 = (undefined1 *)*puVar4;
      uStack_50 = *(undefined4 *)(puVar4 + 1);
      uStack_4c = *(undefined4 *)((longlong)puVar4 + 0xc);
      if ((1 << ((byte)*(undefined4 *)((longlong)param_3 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(param_3);
      }
      FUN_140041b80(param_3,&local_58);
    }
  }
  if ((1 << ((byte)local_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_98);
  }
  if ((1 << ((byte)local_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_88);
  }
  if ((1 << ((byte)local_5c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_68);
  }
  _eh_vector_destructor_iterator_(&local_78,0x10,1,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_48;
  return param_3;
}

