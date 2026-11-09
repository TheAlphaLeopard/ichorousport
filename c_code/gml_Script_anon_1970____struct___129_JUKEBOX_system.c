// gml_Script_anon_1970____struct___129_JUKEBOX_system @ 0x1403939f0

longlong *
gml_Script_anon_1970____struct___129_JUKEBOX_system
          (longlong *param_1,undefined8 param_2,longlong *param_3)

{
  int iVar1;
  undefined8 uVar2;
  uint uVar3;
  ulonglong in_stack_ffffffffffffff78;
  ulonglong in_stack_ffffffffffffff80;
  undefined8 local_78;
  undefined4 local_70;
  undefined4 local_6c;
  undefined8 local_68;
  undefined4 local_5c;
  undefined1 *local_58;
  undefined4 local_4c;
  undefined8 local_48;
  char *local_40;
  undefined4 local_38;
  
  local_40 = "gml_Script_anon@1713@___struct___129@JUKEBOX_system";
  local_48 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_48;
  local_5c = 0xffffff;
  local_68 = 0;
  local_6c = 0;
  uVar3 = 0;
  local_78 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_38 = 0x48;
  uVar2 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f4d68);
  local_4c = 0;
  local_58 = &DAT_bff0000000000000;
  iVar1 = FUN_140e851f0(uVar2,&local_58,DAT_141955260,0);
  if ((1 << ((byte)local_4c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_58);
  }
  if (iVar1 == 0) {
    local_38 = 0x48;
    *(undefined4 *)((longlong)param_3 + 0xc) = 0xd;
  }
  else {
    local_38 = 0x49;
    if ((1 << ((byte)local_6c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_78);
    }
    local_78 = 0;
    local_70 = 0;
    local_6c = 5;
    uVar2 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f4d68);
    FUN_140e87440(uVar2,DAT_1419f4968,0x80000000,&local_68,
                  in_stack_ffffffffffffff78 & 0xffffffffffffff00,
                  in_stack_ffffffffffffff80 & 0xffffffffffffff00);
    uVar2 = FUN_140069500(uVar2);
    uVar2 = FUN_140e63610(uVar2,param_2,&local_78,0,&local_68,0);
    local_4c = 0;
    local_58 = (undefined1 *)0x0;
    iVar1 = FUN_140e851f0(uVar2,&local_58,DAT_141955260,0);
    if ((1 << ((byte)local_4c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_58);
    }
    if ((1 << ((byte)*(undefined4 *)((longlong)param_3 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(param_3);
    }
    *(undefined4 *)((longlong)param_3 + 0xc) = 0xd;
    if (iVar1 != 0) {
      uVar3 = 0x3ff00000;
    }
  }
  *param_3 = (ulonglong)uVar3 << 0x20;
  if ((1 << ((byte)local_6c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_78);
  }
  if ((1 << ((byte)local_5c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_68);
  }
  DAT_141dc7a50 = (undefined8 *)local_48;
  return param_3;
}

