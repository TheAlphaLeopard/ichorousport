// gml_Script____struct___793_gml_Object_oShopSalesman_Create_0 @ 0x140d7c9a0

undefined8 *
gml_Script____struct___793_gml_Object_oShopSalesman_Create_0
          (longlong *param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  ulonglong in_stack_ffffffffffffff58;
  ulonglong in_stack_ffffffffffffff60;
  undefined8 local_98;
  undefined4 local_90;
  undefined4 local_8c;
  undefined8 local_88;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 local_78;
  undefined4 local_70;
  undefined4 local_6c;
  longlong *local_68;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  char *local_40;
  undefined4 local_38;
  
  local_40 = "gml_Script_anon@2399@___struct___793@gml_Object_oShopSalesman_Create_0";
  local_48 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_48;
  local_6c = 0xffffff;
  local_78 = 0;
  local_8c = 0;
  local_98 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_38 = 0x6d;
  uVar1 = (**(code **)(*param_1 + 8))(0,DAT_1419f5ef8);
  puVar2 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419f3f48);
  local_5c = 6;
  local_68 = param_1;
  FUN_140e87440(&local_68,DAT_1419fe0e8,0x80000000,&local_78,
                in_stack_ffffffffffffff58 & 0xffffffffffffff00,
                in_stack_ffffffffffffff60 & 0xffffffffffffff00);
  if ((1 << ((byte)local_5c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_68);
  }
  FUN_140e609c0(param_1);
  local_5c = 0;
  local_68 = (longlong *)0x4040000000000000;
  FUN_140042560(&local_68,uVar1);
  uStack_7c = local_6c;
  uStack_80 = local_70;
  if ((1 << ((byte)local_6c & 0x1f) & 0x46U) == 0) {
    local_88 = local_78;
  }
  else {
    FUN_1400419b0(&local_88,&local_78);
  }
  FUN_1400460e0(&local_88,&local_68);
  if (&local_88 != puVar2) {
    local_58 = (undefined4)local_88;
    uStack_54 = local_88._4_4_;
    uStack_50 = uStack_80;
    uStack_4c = uStack_7c;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar2 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar2);
    }
    FUN_140041b80(puVar2,&local_58);
  }
  if ((1 << ((byte)uStack_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_88);
  }
  if ((1 << ((byte)local_5c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_68);
  }
  FUN_140e60910(1);
  local_38 = 0x6e;
  if ((1 << ((byte)local_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_98);
  }
  local_98 = 0;
  local_90 = 0;
  local_8c = 5;
  uVar1 = (**(code **)(*param_1 + 8))(param_1,DAT_1419ff7c8);
  FUN_140e63610(param_1,param_2,&local_98,0,uVar1,0);
  if ((1 << ((byte)local_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_98);
  }
  if ((1 << ((byte)local_6c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_78);
  }
  DAT_141dc7a50 = (undefined8 *)local_48;
  return param_3;
}

