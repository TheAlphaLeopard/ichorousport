// gml_Script____struct___43___get_bbox_anon_4123___scribble_class_model___scribble_class_model @ 0x14014add0

undefined8 *
gml_Script____struct___43___get_bbox_anon_4123___scribble_class_model___scribble_class_model
          (longlong *param_1,undefined8 param_2,undefined8 *param_3)

{
  char cVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 local_68;
  undefined4 local_60;
  undefined4 local_5c;
  undefined8 local_58;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  char *local_30;
  undefined4 local_28;
  
  local_30 = "gml_Script___flush@anon@2854@__scribble_class_model@__scribble_class_model";
  local_38 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_38;
  local_5c = 0;
  local_68 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_28 = 0x5f;
  uVar2 = (**(code **)(*param_1 + 8))(0,DAT_141a05c98);
  cVar1 = FUN_140e491e0(uVar2);
  if (cVar1 == '\0') {
    local_28 = 0x62;
    if ((1 << ((byte)local_5c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_68);
    }
    local_68 = 0;
    local_60 = 0;
    local_5c = 5;
    uVar2 = (**(code **)(*param_1 + 8))(param_1,DAT_141a06ac8);
    FUN_140e63610(param_1,param_2,&local_68,0,uVar2,0);
    local_28 = 0x65;
    uVar2 = (**(code **)(*param_1 + 8))(param_1,DAT_141a05058);
    uVar3 = (**(code **)(*param_1 + 8))(param_1,DAT_141a058c8);
    FUN_140e98dc0(param_1,param_2,uVar2,uVar3);
    local_28 = 0x68;
    puVar4 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a05c98);
    uStack_4c = 0xd;
    local_58 = 0x3ff0000000000000;
    if (&local_58 != puVar4) {
      local_48 = 0;
      uStack_44 = 0x3ff00000;
      uStack_40 = uStack_50;
      uStack_3c = 0xd;
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar4 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar4);
      }
      FUN_140041b80(puVar4,&local_48);
    }
  }
  else {
    local_28 = 0x5f;
    if (param_3 != &DAT_1419df7b0) {
      local_58 = CONCAT44(DAT_1419df7b0._4_4_,(undefined4)DAT_1419df7b0);
      uStack_50 = DAT_1419df7b8;
      uStack_4c = DAT_1419df7bc;
      if ((1 << ((byte)*(undefined4 *)((longlong)param_3 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(param_3);
      }
      FUN_140041b80(param_3,&local_58);
    }
  }
  if ((1 << ((byte)local_5c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_68);
  }
  DAT_141dc7a50 = (undefined8 *)local_38;
  return param_3;
}

