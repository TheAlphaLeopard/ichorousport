// gml_Object_oRunManager_Create_0 @ 0x140d42960

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void gml_Object_oRunManager_Create_0(longlong *param_1)

{
  int iVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  undefined8 uVar4;
  uint uVar5;
  code *pcVar6;
  undefined8 local_98;
  undefined4 local_90;
  undefined4 local_8c;
  undefined8 local_88;
  undefined4 local_7c;
  undefined8 local_78;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined1 *local_68;
  undefined1 *local_60;
  undefined8 local_58;
  char *local_50;
  undefined4 local_48;
  undefined1 local_40 [12];
  byte local_34;
  undefined1 local_30 [12];
  byte local_24;
  
  local_50 = "gml_Object_oRotManager_Create_0";
  local_48 = 0;
  local_58 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_58;
  pcVar6 = FUN_140041b30;
  _eh_vector_constructor_iterator_(local_40,0x10,2,FUN_1400424d0,FUN_140041b30);
  local_7c = 0xffffff;
  local_88 = 0;
  local_8c = 0xffffff;
  local_98 = 0;
  local_48 = 2;
  puVar2 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a0a848);
  if ((1 << ((byte)*(undefined4 *)((longlong)puVar2 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(puVar2);
  }
  *(undefined4 *)((longlong)puVar2 + 0xc) = 0;
  *puVar2 = 0;
  local_48 = 3;
  puVar2 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a58110);
  if ((1 << ((byte)*(undefined4 *)((longlong)puVar2 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(puVar2);
  }
  *(undefined4 *)((longlong)puVar2 + 0xc) = 0;
  *puVar2 = 0;
  local_48 = 5;
  if ((1 << ((byte)local_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_98);
  }
  local_98 = 0;
  local_90 = 0;
  local_8c = 5;
  plVar3 = (longlong *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419fd3d8);
  uStack_6c = 6;
  local_78 = param_1;
  FUN_140e87440(&local_78,DAT_141a0cfc8,0x80000000,&local_88,(ulonglong)pcVar6 & 0xffffffffffffff00,
                0);
  if ((1 << ((byte)uStack_6c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_78);
  }
  local_78 = (longlong *)CONCAT44(uRam0000000141dc7604,_DAT_141dc7600);
  uStack_70 = uRam0000000141dc7608;
  uStack_6c = uRam0000000141dc760c;
  if ((1 << (local_34 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_40);
  }
  FUN_140041b80(local_40,&local_78);
  local_68 = local_40;
  local_78 = (longlong *)CONCAT44(uRam00000001419ed824,_DAT_1419ed820);
  uStack_70 = uRam00000001419ed828;
  uStack_6c = uRam00000001419ed82c;
  if ((1 << (local_24 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_30);
  }
  FUN_140041b80(local_30,&local_78);
  local_60 = local_30;
  FUN_140e609c0(param_1);
  uVar4 = FUN_140e78db0(&local_98,2,&local_68);
  iVar1 = FUN_140e851f0(&local_88,uVar4,DAT_141955260,0);
  if ((1 << ((byte)*(undefined4 *)((longlong)plVar3 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(plVar3);
  }
  *(undefined4 *)((longlong)plVar3 + 0xc) = 0xd;
  if (iVar1 == 0) {
    uVar5 = 0x3ff00000;
  }
  else {
    uVar5 = 0;
  }
  *plVar3 = (ulonglong)uVar5 << 0x20;
  FUN_140e60910(1);
  if ((1 << ((byte)local_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_98);
  }
  if ((1 << ((byte)local_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_88);
  }
  _eh_vector_destructor_iterator_(local_40,0x10,2,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_58;
  return;
}

