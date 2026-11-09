// gml_Script_anon_2099____struct___129_JUKEBOX_system @ 0x140393c40

undefined8 *
gml_Script_anon_2099____struct___129_JUKEBOX_system
          (longlong *param_1,undefined8 param_2,undefined8 *param_3)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  ulonglong in_stack_ffffffffffffff88;
  ulonglong in_stack_ffffffffffffff90;
  undefined8 local_68;
  undefined4 local_60;
  undefined4 local_5c;
  undefined8 local_58;
  undefined4 local_4c;
  undefined1 *local_48;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  char *local_30;
  undefined4 local_28;
  
  local_30 = "gml_Script_anon@1840@___struct___129@JUKEBOX_system";
  local_38 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_38;
  local_4c = 0xffffff;
  local_58 = 0;
  local_5c = 0;
  local_68 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_28 = 0x4d;
  uVar2 = (**(code **)(*param_1 + 8))(0,DAT_1419f4d68);
  uStack_3c = 0;
  local_48 = &DAT_bff0000000000000;
  iVar1 = FUN_140e851f0(uVar2,&local_48,DAT_141955260,0);
  if ((1 << ((byte)uStack_3c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_48);
  }
  if (iVar1 == 0) {
    local_28 = 0x4d;
    if ((1 << ((byte)*(undefined4 *)((longlong)param_3 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(param_3);
    }
    *(undefined4 *)((longlong)param_3 + 0xc) = 0;
    *param_3 = &DAT_bff0000000000000;
  }
  else {
    local_28 = 0x4e;
    if ((1 << ((byte)local_5c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_68);
    }
    local_68 = 0;
    local_60 = 0;
    local_5c = 5;
    puVar3 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_1419f4d68);
    FUN_140e87440(puVar3,DAT_141a07a18,0x80000000,&local_58,
                  in_stack_ffffffffffffff88 & 0xffffffffffffff00,
                  in_stack_ffffffffffffff90 & 0xffffffffffffff00);
    uVar2 = FUN_140069500(puVar3);
    FUN_140e63610(uVar2,param_2,&local_68,0,&local_58,0);
    local_28 = 0x4f;
    if (puVar3 != param_3) {
      local_48 = (undefined1 *)*puVar3;
      uStack_40 = *(undefined4 *)(puVar3 + 1);
      uStack_3c = *(undefined4 *)((longlong)puVar3 + 0xc);
      if ((1 << ((byte)*(undefined4 *)((longlong)param_3 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(param_3);
      }
      FUN_140041b80(param_3,&local_48);
    }
  }
  if ((1 << ((byte)local_5c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_68);
  }
  if ((1 << ((byte)local_4c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_58);
  }
  DAT_141dc7a50 = (undefined8 *)local_38;
  return param_3;
}

