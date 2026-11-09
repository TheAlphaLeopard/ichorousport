// gml_Script____struct___388_gml_Object_oBossSplit_Create_0 @ 0x1407ea7b0

undefined8 *
gml_Script____struct___388_gml_Object_oBossSplit_Create_0
          (longlong *param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 *local_a8;
  undefined4 local_9c;
  undefined8 local_98;
  undefined4 local_8c;
  undefined8 local_88;
  undefined4 local_7c;
  undefined8 local_78;
  undefined4 local_6c;
  undefined8 local_68;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  char *local_40;
  undefined4 local_38;
  
  local_40 = "gml_Script_anon@12470@___struct___388@gml_Object_oBossSplit_Create_0";
  local_48 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_48;
  local_7c = 0xffffff;
  local_88 = 0;
  local_8c = 0xffffff;
  local_98 = 0;
  local_9c = 0xffffff;
  local_a8 = (undefined1 *)0x0;
  local_6c = 0;
  local_78 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_38 = 0x243;
  puVar1 = (undefined8 *)(**(code **)(*param_1 + 0x10))(0,DAT_141a1f440);
  FUN_140e609c0(param_1);
  puVar2 = (undefined8 *)gml_Script_FracPos(param_1,param_2,&local_78,0,0);
  if (puVar2 != puVar1) {
    local_68 = *puVar2;
    uStack_60 = *(undefined4 *)(puVar2 + 1);
    uStack_5c = *(undefined4 *)((longlong)puVar2 + 0xc);
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar1 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar1);
    }
    FUN_140041b80(puVar1,&local_68);
  }
  FUN_140e60910(1);
  local_38 = 0x245;
  uStack_5c = 0xf;
  local_68 = 0x1000001000002e0;
  local_58 = 0x2e0;
  uStack_54 = 0x1000001;
  uStack_50 = uStack_60;
  uStack_4c = 0xf;
  if ((1 << ((byte)local_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_88);
  }
  FUN_140041b80(&local_88,&local_58);
  FUN_140e86fa0(param_1,DAT_141a0a728,0x80000000,&local_88);
  local_38 = 0x246;
  uVar3 = (**(code **)(*param_1 + 8))(param_1,DAT_141a57250);
  uVar4 = FUN_140e79480(0);
  if ((1 << ((byte)local_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_98);
  }
  local_8c = 0;
  local_98 = uVar4;
  FUN_140e87930(uVar3,DAT_141a1eed0,0x80000000,&local_98);
  local_38 = 0x247;
  if ((1 << ((byte)local_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a8);
  }
  local_9c = 0;
  local_a8 = &DAT_bff0000000000000;
  uVar4 = (**(code **)(*param_1 + 8))(param_1,DAT_141a57250);
  FUN_140e87930(uVar4,DAT_141a067b8,0x80000000,&local_a8);
  if ((1 << ((byte)local_6c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_78);
  }
  if ((1 << ((byte)local_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a8);
  }
  if ((1 << ((byte)local_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_98);
  }
  if ((1 << ((byte)local_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_88);
  }
  DAT_141dc7a50 = (undefined8 *)local_48;
  return param_3;
}

