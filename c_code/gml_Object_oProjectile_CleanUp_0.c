// gml_Object_oProjectile_CleanUp_0 @ 0x140ca4a30

void gml_Object_oProjectile_CleanUp_0(longlong *param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined1 *local_48;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  char *local_30;
  undefined4 local_28;
  
  local_30 = "gml_Object_oProjectile_Step_1";
  local_38 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_38;
  local_28 = 2;
  uVar2 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f59c8);
  uStack_3c = 0;
  local_48 = &DAT_bff0000000000000;
  iVar1 = FUN_140e851f0(uVar2,&local_48,DAT_141955260,0);
  if ((1 << ((byte)uStack_3c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_48);
  }
  if (iVar1 == 0) {
    uVar2 = (**(code **)(*param_1 + 8))(param_1,DAT_141a0a7d8);
    uStack_3c = 0;
    local_48 = &DAT_bff0000000000000;
    iVar1 = FUN_140e851f0(uVar2,&local_48,DAT_141955260,0);
    if ((1 << ((byte)uStack_3c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_48);
    }
    if (iVar1 != 0) {
      local_28 = 3;
      puVar3 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_141a0a7d8);
      puVar4 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419f59c8);
      FUN_140e609c0(param_1);
      if (puVar3 != puVar4) {
        local_48 = (undefined1 *)*puVar3;
        uStack_40 = *(undefined4 *)(puVar3 + 1);
        uStack_3c = *(undefined4 *)((longlong)puVar3 + 0xc);
        if ((1 << ((byte)*(undefined4 *)((longlong)puVar4 + 0xc) & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(puVar4);
        }
        FUN_140041b80(puVar4,&local_48);
      }
      FUN_140e60910(1);
    }
  }
  DAT_141dc7a50 = (undefined8 *)local_38;
  return;
}

