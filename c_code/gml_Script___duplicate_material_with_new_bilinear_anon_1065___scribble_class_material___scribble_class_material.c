// gml_Script___duplicate_material_with_new_bilinear_anon_1065___scribble_class_material___scribble_class_material @ 0x140149450

undefined8 *
gml_Script___duplicate_material_with_new_bilinear_anon_1065___scribble_class_material___scribble_class_material
          (longlong *param_1,undefined8 param_2,undefined8 *param_3,int param_4,undefined8 *param_5)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 local_88;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 local_78;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  char *local_40;
  undefined4 local_38;
  
  local_40 = "gml_Script___scribble_class_line";
  local_48 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_48;
  local_38 = 9;
  local_5c = 0xffffff;
  local_68 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  if ((*(int *)(*(longlong *)ThreadLocalStoragePointer + 0x18) < DAT_141ddcf2c) &&
     (_Init_thread_header(&DAT_141ddcf2c), DAT_141ddcf2c == -1)) {
    DAT_141ddcf30 = FUN_140e63aa0(DAT_141a06908);
    _Init_thread_footer(&DAT_141ddcf2c);
  }
  FUN_140e643a0(param_1,DAT_141ddcf30);
  local_38 = 0xb;
  puVar3 = &DAT_1419df7b0;
  if (param_4 < 1) {
    puVar1 = &DAT_1419df7b0;
  }
  else {
    puVar1 = (undefined8 *)*param_5;
    if (puVar1 == &local_68) goto LAB_140149574;
  }
  local_78 = *puVar1;
  uStack_70 = *(undefined4 *)(puVar1 + 1);
  uStack_6c = *(undefined4 *)((longlong)puVar1 + 0xc);
  if ((1 << ((byte)local_5c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_68);
  }
  FUN_140041b80(&local_68,&local_78);
LAB_140149574:
  FUN_140e86fa0(param_1,DAT_1419fe158,0x80000000,&local_68);
  local_38 = 0xc;
  puVar1 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419fe5c8);
  FUN_140e609c0(param_1);
  if (param_4 < 2) {
    puVar2 = &DAT_1419df7b0;
  }
  else {
    puVar2 = (undefined8 *)param_5[1];
  }
  if (puVar2 != puVar1) {
    local_78 = *puVar2;
    uStack_70 = *(undefined4 *)(puVar2 + 1);
    uStack_6c = *(undefined4 *)((longlong)puVar2 + 0xc);
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar1 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar1);
    }
    FUN_140041b80(puVar1,&local_78);
  }
  FUN_140e60910(1);
  local_38 = 0xd;
  puVar1 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a06918);
  FUN_140e609c0(param_1);
  if (param_4 < 3) {
    puVar2 = &DAT_1419df7b0;
  }
  else {
    puVar2 = (undefined8 *)param_5[2];
  }
  if (puVar2 != puVar1) {
    local_78 = *puVar2;
    uStack_70 = *(undefined4 *)(puVar2 + 1);
    uStack_6c = *(undefined4 *)((longlong)puVar2 + 0xc);
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar1 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar1);
    }
    FUN_140041b80(puVar1,&local_78);
  }
  FUN_140e60910(1);
  local_38 = 0xe;
  puVar1 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a068f8);
  FUN_140e609c0(param_1);
  if (param_4 < 4) {
    puVar2 = &DAT_1419df7b0;
  }
  else {
    puVar2 = (undefined8 *)param_5[3];
  }
  if (puVar2 != puVar1) {
    local_78 = *puVar2;
    uStack_70 = *(undefined4 *)(puVar2 + 1);
    uStack_6c = *(undefined4 *)((longlong)puVar2 + 0xc);
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar1 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar1);
    }
    FUN_140041b80(puVar1,&local_78);
  }
  FUN_140e60910(1);
  local_38 = 0xf;
  puVar1 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a06928);
  FUN_140e609c0(param_1);
  if (param_4 < 5) {
    puVar2 = &DAT_1419df7b0;
  }
  else {
    puVar2 = (undefined8 *)param_5[4];
  }
  if (puVar2 != puVar1) {
    local_78 = *puVar2;
    uStack_70 = *(undefined4 *)(puVar2 + 1);
    uStack_6c = *(undefined4 *)((longlong)puVar2 + 0xc);
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar1 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar1);
    }
    FUN_140041b80(puVar1,&local_78);
  }
  FUN_140e60910(1);
  local_38 = 0x10;
  puVar1 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a068e8);
  FUN_140e609c0(param_1);
  if (param_4 < 5) {
    puVar2 = &DAT_1419df7b0;
  }
  else {
    puVar2 = (undefined8 *)param_5[4];
  }
  uStack_6c = 0;
  local_78 = 0x3ff0000000000000;
  FUN_1400460e0(&local_78,puVar2);
  if (3 < param_4) {
    puVar3 = (undefined8 *)param_5[3];
  }
  uStack_7c = uStack_6c;
  uStack_80 = uStack_70;
  if ((1 << ((byte)uStack_6c & 0x1f) & 0x46U) == 0) {
    local_88 = local_78;
  }
  else {
    FUN_1400419b0(&local_88,&local_78);
  }
  FUN_1400462a0(&local_88,puVar3);
  if (&local_88 != puVar1) {
    local_58 = (undefined4)local_88;
    uStack_54 = local_88._4_4_;
    uStack_50 = uStack_80;
    uStack_4c = uStack_7c;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar1 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar1);
    }
    FUN_140041b80(puVar1,&local_58);
  }
  if ((1 << ((byte)uStack_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_88);
  }
  if ((1 << ((byte)uStack_6c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_78);
  }
  FUN_140e60910(1);
  if ((1 << ((byte)local_5c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_68);
  }
  DAT_141dc7a50 = (undefined8 *)local_48;
  return param_3;
}

