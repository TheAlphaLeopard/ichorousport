// gml_Object_oEnemyDarner_Alarm_2 @ 0x1409b3ea0

undefined8 *
gml_Object_oEnemyDarner_Alarm_2(longlong *param_1,undefined8 param_2,undefined8 *param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong *plVar3;
  undefined8 local_88;
  undefined4 local_7c;
  undefined8 local_78;
  undefined4 local_6c;
  undefined8 local_68;
  undefined4 local_5c;
  undefined8 local_58;
  undefined4 local_4c;
  undefined8 local_48;
  char *local_40;
  undefined4 local_38;
  
  local_40 = "gml_Script_anon@19823@___struct___472@gml_Object_oEnemyDarner_Create_0";
  local_48 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_48;
  local_4c = 0xffffff;
  local_58 = 0;
  local_5c = 0xffffff;
  local_68 = 0;
  local_6c = 0xffffff;
  local_78 = 0;
  local_7c = 0xffffff;
  local_88 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_38 = 0x3a7;
  uVar2 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f0d48);
  if ((1 << ((byte)local_4c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_58);
  }
  local_4c = 0;
  local_58 = 0x3fd3333333333333;
  FUN_140e87930(uVar2,DAT_1419f0c28,0x80000000,&local_58);
  local_38 = 0x3a8;
  plVar3 = (longlong *)(**(code **)(*param_1 + 8))(param_1,DAT_1419f0d88);
  if ((1 << ((byte)local_5c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_68);
  }
  local_5c = 0;
  local_68 = 0x3fd0000000000000;
  if (((*(uint *)((longlong)plVar3 + 0xc) & 0xffffff) == 2) && (lVar1 = *plVar3, lVar1 != 0)) {
    if (*(int *)(lVar1 + 0x24) < 1) {
      FUN_140e632c0("index out of bounds request %d maximum size is %d",0);
      plVar3 = (longlong *)0x0;
    }
    else {
      plVar3 = *(longlong **)(lVar1 + 8);
    }
  }
  else {
    FUN_140e632c0("trying to index variable that is not an array");
  }
  FUN_140e87930(plVar3,DAT_1419f0c28,0x80000000,&local_68);
  local_38 = 0x3a9;
  plVar3 = (longlong *)(**(code **)(*param_1 + 8))(param_1,DAT_1419f0d88);
  if ((1 << ((byte)local_6c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_78);
  }
  local_6c = 0;
  local_78 = 0x3fd0000000000000;
  if (((*(uint *)((longlong)plVar3 + 0xc) & 0xffffff) == 2) && (lVar1 = *plVar3, lVar1 != 0)) {
    if (*(int *)(lVar1 + 0x24) < 2) {
      FUN_140e632c0("index out of bounds request %d maximum size is %d",1);
      plVar3 = (longlong *)0x0;
    }
    else {
      plVar3 = (longlong *)(*(longlong *)(lVar1 + 8) + 0x10);
    }
  }
  else {
    FUN_140e632c0("trying to index variable that is not an array");
  }
  FUN_140e87930(plVar3,DAT_1419f0c28,0x80000000,&local_78);
  local_38 = 0x3aa;
  plVar3 = (longlong *)(**(code **)(*param_1 + 8))(param_1,DAT_1419f0d88);
  if ((1 << ((byte)local_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_88);
  }
  local_7c = 0;
  local_88 = 0x3fd0000000000000;
  if (((*(uint *)((longlong)plVar3 + 0xc) & 0xffffff) == 2) && (lVar1 = *plVar3, lVar1 != 0)) {
    if (*(int *)(lVar1 + 0x24) < 3) {
      FUN_140e632c0("index out of bounds request %d maximum size is %d",2);
      plVar3 = (longlong *)0x0;
    }
    else {
      plVar3 = (longlong *)(*(longlong *)(lVar1 + 8) + 0x20);
    }
  }
  else {
    FUN_140e632c0("trying to index variable that is not an array");
  }
  FUN_140e87930(plVar3,DAT_1419f0c28,0x80000000,&local_88);
  if ((1 << ((byte)local_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_88);
  }
  if ((1 << ((byte)local_6c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_78);
  }
  if ((1 << ((byte)local_5c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_68);
  }
  if ((1 << ((byte)local_4c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_58);
  }
  DAT_141dc7a50 = (undefined8 *)local_48;
  return param_3;
}

