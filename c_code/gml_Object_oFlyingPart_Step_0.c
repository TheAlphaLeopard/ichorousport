// gml_Object_oFlyingPart_Step_0 @ 0x140ae0260

void gml_Object_oFlyingPart_Step_0(undefined8 param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined8 uVar5;
  undefined4 uVar10;
  double dVar6;
  uint in_stack_ffffffffffffff08;
  uint uVar11;
  uint in_stack_ffffffffffffff10;
  uint uVar12;
  undefined8 local_c8;
  uint local_bc;
  undefined8 local_b8;
  uint local_ac;
  undefined8 local_a8;
  uint local_9c;
  undefined8 local_98;
  uint local_8c;
  double local_88;
  uint local_7c;
  undefined8 local_78;
  undefined4 local_6c;
  undefined8 local_68;
  char *local_60;
  undefined4 local_58;
  
  local_60 = "gml_Object_oFly_Draw_0";
  local_68 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_68;
  local_7c = 0xffffff;
  local_88 = 0.0;
  local_8c = 0xffffff;
  local_98 = 0;
  local_9c = 0xffffff;
  local_a8 = 0;
  local_ac = 0xffffff;
  local_b8 = 0;
  local_bc = 0xffffff;
  local_c8 = 0;
  local_58 = 2;
  local_6c = 6;
  uVar12 = in_stack_ffffffffffffff10 & 0xffffff00;
  uVar11 = in_stack_ffffffffffffff08 & 0xffffff00;
  local_78 = param_1;
  FUN_140e87440(&local_78,DAT_141a0a728,0x80000000,&local_88,uVar11,uVar12);
  if ((1 << ((byte)local_6c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_78);
  }
  local_6c = 6;
  uVar12 = uVar12 & 0xffffff00;
  uVar11 = uVar11 & 0xffffff00;
  local_78 = param_1;
  FUN_140e87440(&local_78,DAT_141a0cfc8,0x80000000,&local_98,uVar11,uVar12);
  if ((1 << ((byte)local_6c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_78);
  }
  local_6c = 6;
  uVar12 = uVar12 & 0xffffff00;
  uVar11 = uVar11 & 0xffffff00;
  local_78 = param_1;
  FUN_140e87440(&local_78,DAT_1419fe0e8,0x80000000,&local_a8,uVar11,uVar12);
  if ((1 << ((byte)local_6c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_78);
  }
  local_6c = 6;
  uVar12 = uVar12 & 0xffffff00;
  uVar11 = uVar11 & 0xffffff00;
  local_78 = param_1;
  FUN_140e87440(&local_78,DAT_1419fe158,0x80000000,&local_b8,uVar11,uVar12);
  if ((1 << ((byte)local_6c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_78);
  }
  local_6c = 6;
  local_78 = param_1;
  FUN_140e87440(&local_78,DAT_141a0a778,0x80000000,&local_c8,uVar11 & 0xffffff00,uVar12 & 0xffffff00
               );
  if ((1 << ((byte)local_6c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_78);
  }
  if ((local_bc & 0xffffff) == 0) {
    uVar1 = (undefined4)local_c8;
    uVar7 = (undefined4)((ulonglong)local_c8 >> 0x20);
  }
  else {
    uVar5 = FUN_140e4b060(&local_c8);
    uVar1 = (undefined4)uVar5;
    uVar7 = (undefined4)((ulonglong)uVar5 >> 0x20);
  }
  if ((local_ac & 0xffffff) == 0) {
    uVar2 = (undefined4)local_b8;
    uVar8 = (undefined4)((ulonglong)local_b8 >> 0x20);
  }
  else {
    uVar5 = FUN_140e4b060(&local_b8);
    uVar2 = (undefined4)uVar5;
    uVar8 = (undefined4)((ulonglong)uVar5 >> 0x20);
  }
  if ((local_9c & 0xffffff) == 0) {
    uVar3 = (undefined4)local_a8;
    uVar9 = (undefined4)((ulonglong)local_a8 >> 0x20);
  }
  else {
    uVar5 = FUN_140e4b060(&local_a8);
    uVar3 = (undefined4)uVar5;
    uVar9 = (undefined4)((ulonglong)uVar5 >> 0x20);
  }
  if ((local_8c & 0xffffff) == 0) {
    uVar4 = (undefined4)local_98;
    uVar10 = (undefined4)((ulonglong)local_98 >> 0x20);
  }
  else {
    uVar5 = FUN_140e4b060(&local_98);
    uVar4 = (undefined4)uVar5;
    uVar10 = (undefined4)((ulonglong)uVar5 >> 0x20);
  }
  if ((local_7c & 0xffffff) == 0) {
    dVar6 = local_88;
  }
  else {
    dVar6 = (double)FUN_140e4b060(&local_88);
  }
  FUN_140ec5dd0(param_1,(longlong)dVar6,(float)(double)CONCAT44(uVar10,uVar4),
                (float)(double)CONCAT44(uVar9,uVar3),(float)(double)CONCAT44(uVar8,uVar2),0x3f800000
                ,0x3f800000,(float)(double)CONCAT44(uVar7,uVar1),0xffffff,0x3f800000);
  if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  if ((1 << ((byte)local_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b8);
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
  DAT_141dc7a50 = (undefined8 *)local_68;
  return;
}

