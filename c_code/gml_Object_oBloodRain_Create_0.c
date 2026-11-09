// gml_Object_oBloodRain_Create_0 @ 0x1406e5570

void gml_Object_oBloodRain_Create_0(longlong *param_1,undefined8 param_2)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  longlong *local_res8;
  undefined8 local_res10;
  undefined4 local_res18;
  undefined8 local_88;
  undefined4 local_80;
  undefined4 local_7c;
  undefined8 local_78;
  undefined4 local_6c;
  undefined8 local_68;
  char *local_60;
  undefined4 local_58;
  undefined1 local_50 [16];
  longlong local_40;
  
  local_res18 = 0;
  local_60 = "gml_Object_oBloodPullManager_Destroy_0";
  local_68 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_68;
  local_58 = 2;
  local_7c = 0xf;
  local_88 = 0x10000000000001d;
  local_res8 = param_1;
  local_res10 = param_2;
  iVar2 = FUN_140e63cb0(local_50,&local_res8,&local_res10,&local_88);
  if ((1 << ((byte)local_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_88);
  }
  if (0 < iVar2) {
    do {
      local_58 = 3;
      uVar3 = (**(code **)(*local_res8 + 8))(local_res8,DAT_141a0a848);
      puVar4 = (undefined8 *)(**(code **)(*local_res8 + 8))(local_res8,DAT_141a04168);
      local_7c = *(undefined4 *)((longlong)puVar4 + 0xc);
      local_80 = *(undefined4 *)(puVar4 + 1);
      if ((1 << ((byte)local_7c & 0x1f) & 0x46U) == 0) {
        local_88 = *puVar4;
      }
      else {
        FUN_1400419b0(&local_88,puVar4);
      }
      local_res18 = 1;
      local_6c = 0;
      local_78 = 0x4000000000000000;
      FUN_140046500(&local_88,&local_78);
      if ((1 << ((byte)local_6c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_78);
      }
      iVar2 = FUN_140e851f0(uVar3,&local_88,DAT_141955260,1);
      local_res18 = 0;
      if ((1 << ((byte)local_7c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_88);
      }
      if (0 < iVar2) {
        local_58 = 4;
        puVar4 = (undefined8 *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_141a0a848);
        if ((1 << ((byte)*(undefined4 *)((longlong)puVar4 + 0xc) & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(puVar4);
        }
        *(undefined4 *)((longlong)puVar4 + 0xc) = 0;
        *puVar4 = 0;
      }
      cVar1 = FUN_140e643f0(local_50,&local_res8,&local_res10);
    } while (cVar1 != '\0');
  }
  FUN_140e63970(local_50,&local_res8,&local_res10);
  if (local_40 != 0) {
    FUN_140e4cd60();
  }
  DAT_141dc7a50 = (undefined8 *)local_68;
  return;
}

