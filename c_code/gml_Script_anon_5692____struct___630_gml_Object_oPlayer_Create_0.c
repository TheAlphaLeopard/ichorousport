// gml_Script_anon_5692____struct___630_gml_Object_oPlayer_Create_0 @ 0x140bf0e90

undefined8 *
gml_Script_anon_5692____struct___630_gml_Object_oPlayer_Create_0
          (longlong *param_1,undefined8 param_2,undefined8 *param_3)

{
  ulonglong uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  ulonglong uVar4;
  undefined8 local_88;
  undefined4 local_80;
  undefined4 local_7c;
  undefined8 local_78;
  undefined4 local_6c;
  undefined8 local_68;
  undefined4 local_5c;
  longlong *local_58;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  longlong *local_48;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  char *local_30;
  undefined4 local_28;
  
  local_30 = "gml_Script_anon@5524@___struct___629@gml_Object_oPlayer_Create_0";
  local_38 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_38;
  uStack_4c = 0xffffff;
  local_58 = (longlong *)0x0;
  local_5c = 0xffffff;
  local_68 = 0;
  local_6c = 0xffffff;
  local_78 = 0;
  local_7c = 0;
  local_88 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_28 = 0x13b;
  uVar1 = (**(code **)(*param_1 + 8))(0,DAT_1419f7f48);
  uVar4 = 0;
  FUN_140e63610(param_1,param_2,&local_88,0,uVar1,0);
  local_28 = 0x13d;
  uVar2 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f5e38);
  uStack_3c = 6;
  local_48 = param_1;
  FUN_140e87440(&local_48,DAT_141a0cfc8,0x80000000,&local_58,uVar1 & 0xffffffffffffff00,
                uVar4 & 0xffffffffffffff00);
  if ((1 << ((byte)uStack_3c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_48);
  }
  local_48 = local_58;
  uStack_40 = uStack_50;
  uStack_3c = uStack_4c;
  if ((1 << ((byte)local_5c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_68);
  }
  FUN_140041b80(&local_68,&local_48);
  FUN_140e86c30(uVar2,DAT_141a0cfc8,0x80000000,&local_68);
  local_28 = 0x13e;
  puVar3 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_1419f5ef8);
  if (puVar3 != &local_78) {
    local_48 = (longlong *)*puVar3;
    uStack_40 = *(undefined4 *)(puVar3 + 1);
    uStack_3c = *(undefined4 *)((longlong)puVar3 + 0xc);
    if ((1 << ((byte)local_6c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_78);
    }
    FUN_140041b80(&local_78,&local_48);
  }
  uVar2 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f5e38);
  FUN_140e87930(uVar2,DAT_1419f5ef8,0x80000000,&local_78);
  local_28 = 0x13f;
  if ((1 << ((byte)local_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_88);
  }
  local_88 = 0;
  local_80 = 0;
  local_7c = 5;
  uVar2 = (**(code **)(*param_1 + 8))(param_1,DAT_141a096c8);
  FUN_140e63610(param_1,param_2,&local_88,0,uVar2,0);
  if ((1 << ((byte)local_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_88);
  }
  if ((1 << ((byte)local_6c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_78);
  }
  if ((1 << ((byte)local_5c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_68);
  }
  if ((1 << ((byte)uStack_4c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_58);
  }
  DAT_141dc7a50 = (undefined8 *)local_38;
  return param_3;
}

