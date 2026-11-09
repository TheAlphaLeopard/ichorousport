// gml_Object_oShatteredShard_Step_0 @ 0x140d6abd0

void gml_Object_oShatteredShard_Step_0(longlong *param_1,longlong *param_2)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  longlong *local_res8;
  longlong *local_res10;
  undefined8 local_78;
  undefined4 local_6c;
  undefined8 local_68;
  char *local_60;
  undefined4 local_58;
  undefined1 local_50 [16];
  longlong local_40;
  
  local_60 = "gml_Object_oSharpenStacker_Step_0";
  local_58 = 0;
  local_68 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_68;
  local_res8 = param_1;
  local_res10 = param_2;
  uVar3 = (**(code **)(*DAT_141a729d8 + 8))(DAT_141a729d8,DAT_141a0a9c8);
  local_58 = 2;
  uVar4 = (**(code **)(*local_res8 + 8))(local_res8,DAT_141a0a848);
  local_6c = 0;
  local_78 = 0;
  iVar2 = FUN_140e851f0(uVar4,&local_78,DAT_141955260,1);
  if ((1 << ((byte)local_6c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_78);
  }
  if (iVar2 != -2 && iVar2 < 1) {
    uVar4 = (**(code **)(*local_res8 + 8))(local_res8,DAT_141a0a7d8);
    local_6c = 0;
    local_78 = 0;
    iVar2 = FUN_140e851f0(uVar4,&local_78,DAT_141955260,1);
    if ((1 << ((byte)local_6c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_78);
    }
    if (0 < iVar2) {
      local_58 = 4;
      local_6c = 0xf;
      local_78 = 0x1000000000000ee;
      iVar2 = FUN_140e63cb0(local_50,&local_res8,&local_res10,&local_78);
      if ((1 << ((byte)local_6c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_78);
      }
      if (0 < iVar2) {
        do {
          local_58 = 5;
          uVar4 = (**(code **)(*local_res10 + 8))(local_res10,DAT_141a0a7d8);
          uVar5 = (**(code **)(*local_res8 + 0x10))(local_res8,DAT_141a0a7d8);
          FUN_140e609c0(local_res8);
          FUN_1400462a0(uVar5,uVar4);
          FUN_140e60910(1);
          cVar1 = FUN_140e643f0(local_50,&local_res8,&local_res10);
        } while (cVar1 != '\0');
      }
      FUN_140e63970(local_50,&local_res8,&local_res10);
      local_58 = 7;
      puVar6 = (undefined8 *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_141a0a7d8);
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar6 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar6);
      }
      *(undefined4 *)((longlong)puVar6 + 0xc) = 0;
      *puVar6 = 0;
      local_58 = 8;
      puVar6 = (undefined8 *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_141a0a848);
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar6 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar6);
      }
      *(undefined4 *)((longlong)puVar6 + 0xc) = 0;
      *puVar6 = 0;
      if (local_40 != 0) {
        FUN_140e4cd60();
      }
    }
  }
  local_58 = 0xc;
  uVar4 = (**(code **)(*local_res8 + 0x10))(local_res8,DAT_141a0a848);
  FUN_140e609c0(local_res8);
  FUN_1400462a0(uVar4,uVar3);
  FUN_140e60910(1);
  DAT_141dc7a50 = (undefined8 *)local_68;
  return;
}

