// gml_Script_anon_2705_anon_2320____struct___129_JUKEBOX_system @ 0x1403940a0

undefined8 *
gml_Script_anon_2705_anon_2320____struct___129_JUKEBOX_system
          (longlong *param_1,undefined8 param_2,undefined8 *param_3)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
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
  
  local_40 = "gml_Script_anon@2099@___struct___129@JUKEBOX_system";
  local_48 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_48;
  local_5c = 0xffffff;
  local_68 = 0;
  local_6c = 0;
  local_78 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_38 = 0x59;
  uVar2 = (**(code **)(*param_1 + 8))(0,DAT_1419f4d68);
  local_4c = 0;
  local_58 = &DAT_bff0000000000000;
  iVar1 = FUN_140e851f0(uVar2,&local_58,DAT_141955260,0);
  if ((1 << ((byte)local_4c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_58);
  }
  if (iVar1 == 0) {
    local_38 = 0x59;
  }
  else {
    local_38 = 0x5a;
    if ((1 << ((byte)local_6c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_78);
    }
    local_78 = 0;
    local_70 = 0;
    local_6c = 5;
    uVar2 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f4d68);
    FUN_140e87440(uVar2,DAT_141a580f0,0x80000000,&local_68,
                  in_stack_ffffffffffffff78 & 0xffffffffffffff00,
                  in_stack_ffffffffffffff80 & 0xffffffffffffff00);
    uVar2 = FUN_140069500(uVar2);
    FUN_140e63610(uVar2,param_2,&local_78,0,&local_68,0);
    local_38 = 0x5b;
    puVar3 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419f4d68);
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar3 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar3);
    }
    *(undefined4 *)((longlong)puVar3 + 0xc) = 0;
    *puVar3 = &DAT_bff0000000000000;
    local_38 = 0x5c;
  }
  if ((1 << ((byte)*(undefined4 *)((longlong)param_3 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(param_3);
  }
  *(undefined4 *)((longlong)param_3 + 0xc) = 0;
  *param_3 = &DAT_bff0000000000000;
  if ((1 << ((byte)local_6c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_78);
  }
  if ((1 << ((byte)local_5c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_68);
  }
  DAT_141dc7a50 = (undefined8 *)local_48;
  return param_3;
}

