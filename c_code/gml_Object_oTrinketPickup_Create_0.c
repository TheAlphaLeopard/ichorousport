// gml_Object_oTrinketPickup_Create_0 @ 0x140ddd530

void gml_Object_oTrinketPickup_Create_0(longlong *param_1)

{
  char cVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  double *pdVar4;
  double dVar5;
  undefined8 local_38;
  undefined4 local_2c;
  undefined8 local_28;
  char *local_20;
  undefined4 local_18;
  
  local_20 = "gml_Object_oTransition_Draw_75";
  local_18 = 0;
  local_28 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_28;
  uVar3 = (**(code **)(*DAT_141a729d8 + 8))(DAT_141a729d8,DAT_141a57d00);
  local_18 = 4;
  pdVar4 = (double *)(**(code **)(*param_1 + 8))(param_1,DAT_141a57840);
  if ((*(uint *)((longlong)pdVar4 + 0xc) & 0xffffff) == 0) {
    dVar5 = *pdVar4;
  }
  else {
    dVar5 = (double)FUN_140e4b060(pdVar4);
  }
  FUN_140e9c1f0((float)dVar5);
  local_18 = 5;
  FUN_140e9c240(0);
  local_18 = 7;
  cVar1 = FUN_140e491e0(uVar3);
  if (cVar1 == '\0') {
    local_18 = 8;
    local_2c = 0xd;
    local_38 = 0;
    uVar2 = FUN_140e491e0(&local_38);
    FUN_140e9c1c0(0xc2000000,0xc2000000,0x44000000,0x43970000,uVar2);
    if ((1 << ((byte)local_2c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_38);
    }
  }
  local_18 = 10;
  FUN_140e9c240(0xffffff);
  local_18 = 0xb;
  FUN_140e9c1f0(0x3f800000);
  DAT_141dc7a50 = (undefined8 *)local_28;
  return;
}

